class Shape {
	String shapeName;
	double area,parameter;
//	constructor
	Shape() {
		shapeName = "Unknown";
		this.area = 0;
		this.parameter = 0;
	}
	Shape(String shapeName, double area, double perameter) {
		this.shapeName = shapeName;
		this.area = area;
		this.parameter = perameter;
	}
	String getShapeName() {
		return shapeName;
	}
	void setShapeName(String shapeName) {
		this.shapeName = shapeName;
	}
	double getArea() {
		return area;
	}
	void setArea(double area) {
		this.area = area;
	}
	double getPerameter() {
		return parameter;
	}
	void setPerameter(double perameter) {
		this.parameter = perameter;
	}
	double calculateArea(){
		return area;
	}
//	display
	void display() {
		System.out.println("Shape name is "+this.shapeName);
		System.out.println("Area name is "+this.area);
		System.out.println("Shape name is "+this.parameter);
	}
}//class Shape ends here
class Rectangle extends Shape{
	double lenght,breath;
//	constructor
	Rectangle() {
		super();	
		this.lenght = 0;
		this.breath = 0;
	}
	Rectangle(String shapeName, double area, double perameter,double lenght, double breath) {
	super(shapeName,area,perameter);
	this.lenght = lenght;
	this.breath = breath;
	}
	double getLenght() {
		return lenght;
	}
	void setLenght(double lenght) {
		this.lenght = lenght;
	}
	double getBreath() {
		return breath;
	}
	void setBreath(double breath) {
		this.breath = breath;
	}
	void display() {
		super.display();
		System.out.println("Lenght is "+this.lenght);
		System.out.println("Breath is "+this.breath);
	}
	double calculateArea(){
		super.calculateArea();
		return this.area=this.lenght+this.lenght;
	}
	
}//class Rectangle ends here

class Circle extends Shape{
	double radius;

	Circle() {
		super();
		this.radius = 0;
	}

	Circle(String shapeName, double area, double perameter,double radius) {
		super(shapeName,area,perameter);
		this.radius = radius;
	}

	double getRadius() {
		return radius;
	}

	void setRadius(double radius) {
		this.radius = radius;
	}
	void display() {
		super.display();
		System.out.println("Radius is "+this.radius);
	}
	double calculateArea(){
		super.calculateArea();
		return this.area=3.14*this.radius*this.radius;
	}
	
}//class circle ends here
class Triangle extends Shape{
	double base,height;

	Triangle() {
		super();
		this.base = 0;
		this.height = 0;
	}
	Triangle(String shapeName, double area, double perameter,double base, double height) {
		super(shapeName,area,perameter);
		this.base = base;
		this.height = height;
	}
	double getBase() {
		return base;
	}
	void setBase(double base) {
		this.base = base;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height) {
		this.height = height;
	}
	void display() {
		super.display();
		System.out.println("Height is "+this.height);
		System.out.println("Base is "+this.base);
	}
	double calculateArea(){
		super.calculateArea();
		return this.area=0.5*this.base*this.height;
	}
}//class triangle ends here

class TestShape{
	public static void main(String[] args) {
		Shape s1=new Shape();
		s1.display();
		System.out.println(s1.calculateArea());
		Rectangle r1=new Rectangle("Rectangle",0,0,15,12);
		r1.display();
		System.out.println(r1.calculateArea());
		Triangle t1=new Triangle("Triangle",0,0,15,20);
		t1.display();
		System.out.println(t1.calculateArea());
		Circle c1=new Circle("Circle",0,0,13);
		c1.display();
		System.out.println(c1.calculateArea());
	}
	
}
