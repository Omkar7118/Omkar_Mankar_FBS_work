import javafx.animation.AnimationTimer;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.input.KeyCode;
import javafx.scene.paint.Color;
import javafx.stage.Stage;
import java.util.*;

public class SnakeGame extends Application {
    // Game settings
    static final int WIDTH = 20;
    static final int HEIGHT = 20;
    static final int SIZE = 25;

    // Snake
    List<int[]> snake = new ArrayList<>();
    int[] food = new int[2];
    String direction = "RIGHT";
    boolean gameOver = false;

    @Override
    public void start(Stage stage) {
        Canvas canvas = new Canvas(WIDTH * SIZE, HEIGHT * SIZE);
        GraphicsContext gc = canvas.getGraphicsContext2D();

        // Snake starting point
        snake.add(new int[]{5, 5});
        spawnFood();

        Scene scene = new Scene(new javafx.scene.Group(canvas));
        stage.setScene(scene);
        stage.setTitle("Snake Game - JavaFX");
        stage.show();

        // Handle key presses
        scene.setOnKeyPressed(e -> {
            if (e.getCode() == KeyCode.UP && !direction.equals("DOWN")) direction = "UP";
            if (e.getCode() == KeyCode.DOWN && !direction.equals("UP")) direction = "DOWN";
            if (e.getCode() == KeyCode.LEFT && !direction.equals("RIGHT")) direction = "LEFT";
            if (e.getCode() == KeyCode.RIGHT && !direction.equals("LEFT")) direction = "RIGHT";
        });

        // Game loop
        new AnimationTimer() {
            long lastTick = 0;

            @Override
            public void handle(long now) {
                if (now - lastTick > 100_000_000) { // 0.1s per tick
                    lastTick = now;
                    if (!gameOver) tick(gc);
                }
            }
        }.start();
    }

    // Game tick
    void tick(GraphicsContext gc) {
        // Move snake
        int[] head = snake.get(0);
        int[] newHead = {head[0], head[1]};
        switch (direction) {
            case "UP": newHead[1]--; break;
            case "DOWN": newHead[1]++; break;
            case "LEFT": newHead[0]--; break;
            case "RIGHT": newHead[0]++; break;
        }

        // Check collisions
        if (newHead[0] < 0 || newHead[1] < 0 || newHead[0] >= WIDTH || newHead[1] >= HEIGHT
                || snake.stream().anyMatch(p -> p[0] == newHead[0] && p[1] == newHead[1])) {
            gameOver = true;
            gc.setFill(Color.RED);
            gc.fillText("GAME OVER", WIDTH * SIZE / 2 - 30, HEIGHT * SIZE / 2);
            return;
        }

        // Add new head
        snake.add(0, newHead);

        // Check if food eaten
        if (newHead[0] == food[0] && newHead[1] == food[1]) {
            spawnFood();
        } else {
            snake.remove(snake.size() - 1); // remove tail
        }

        // Draw
        gc.setFill(Color.BLACK);
        gc.fillRect(0, 0, WIDTH * SIZE, HEIGHT * SIZE);

        gc.setFill(Color.LIME);
        for (int[] p : snake) {
            gc.fillRect(p[0] * SIZE, p[1] * SIZE, SIZE - 1, SIZE - 1);
        }

        gc.setFill(Color.RED);
        gc.fillOval(food[0] * SIZE, food[1] * SIZE, SIZE, SIZE);
    }

    // Spawn food at random location
    void spawnFood() {
        Random rand = new Random();
        food[0] = rand.nextInt(WIDTH);
        food[1] = rand.nextInt(HEIGHT);
    }

    public static void main(String[] args) {
        launch(args);
    }
}
