import java.util.LinkedList;
import java.util.Scanner;

public class TestLinkedList {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList queueList = new LinkedList(); 
        LinkedList stackList = new LinkedList();
        int choice;

        do {
            System.out.println("Enter");
            System.out.println("1.Queue");
            System.out.println("2.Stack");
            System.out.println("3.Exit");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Queue Menu");
                    System.out.println("1.Add number");
                    System.out.println("2.Remove number");
                    int queueChoice = sc.nextInt();
                    switch (queueChoice) {
                        case 1:
                            System.out.println("Enter number : ");
                            for (int i = 0; i < 5; i++) {
                                queueList.add(sc.nextInt());
                            }
                            System.out.println("Queue : " + queueList);
                            break;
                        case 2:
                            int removed = (int) queueList.poll();
                            System.out.println("Queue : " + queueList);
                            break;
                    }
                    break;

                case 2:
                    System.out.println("Stack Menu");
                    System.out.println("1. Add numbers");
                    System.out.println("2. Remove number");
                    int stackChoice = sc.nextInt();
                    switch (stackChoice) {
                        case 1:
                            System.out.println("Enter number : ");
                            for (int i = 0; i < 5; i++) {
                                stackList.push(sc.nextInt());
                            }
                            System.out.println("Stack: " + stackList);
                            break;
                        case 2:
                            int removed = (int) stackList.pop();
                            System.out.println("Stack: " + stackList);
                            break;
                    }
                    break;
            }
        } while (choice != 3);

        System.out.println("Exiting program...");
    }
}