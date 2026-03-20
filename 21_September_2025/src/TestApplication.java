class Application{
	int serialNumber;
	String brand,color;
	Application() {
		this.serialNumber = 0;
		this.brand = "Unknown";
		this.color = "Unknown";
	}
	Application(int serialNumber, String brand, String color) {
		super();
		this.serialNumber = serialNumber;
		this.brand = brand;
		this.color = color;
	}
	int getSerialNumber() {
		return serialNumber;
	}
	void setSerialNumber(int serialNumber) {
		this.serialNumber = serialNumber;
	}
	String getBrand() {
		return brand;
	}
	void setBrand(String brand) {
		this.brand = brand;
	}
	String getColor() {
		return color;
	}
	void setColor(String color) {
		this.color = color;
	}
	void display(){
		System.out.println("Serial no is "+this.serialNumber);
		System.out.println("Brand is "+this.brand);
		System.out.println("Color is "+this.color);
	}
	void start(){
		System.out.println("Starts");
	}
}//class Application ends here
class Refridgerator extends Application{
	int noOfDoor;
	float temparature;
//	contructors
	Refridgerator() {
		super();
		this.noOfDoor = 0;
		this.temparature = 0;
	}
	Refridgerator(int serialNumber, String brand, String color,int noOfDoor, float temparature) {
		super(serialNumber, brand, color);
		this.noOfDoor = noOfDoor;
		this.temparature = temparature;
	}
//	setters and getters
	int getNoOfDoor() {
		return noOfDoor;
	}
	void setNoOfDoor(int noOfDoor) {
		this.noOfDoor = noOfDoor;
	}
	float getTemparature() {
		return temparature;
	}
	void setTemparature(float temparature) {
		this.temparature = temparature;
	}
	void display() {
		super.display();
		System.out.println("No of doors is "+this.noOfDoor);
		System.out.println("Temperature is "+this.temparature);
	}
	void start(){
		System.out.println("Starts cooling");
	}
}// class Refridgrator ends here
class WashingMachine extends Application{
	int capacity;
	String washMode;
//	constructor
	WashingMachine() {
		super();
		this.capacity = 0;
		this.washMode = "No modes";
	}

	WashingMachine(int serialNumber, String brand, String color,int capacity, String washMode) {
		super(serialNumber, brand, color);
		this.capacity = capacity;
		this.washMode = washMode;
}

//	setters and getters
	int getCapacity() {
		return capacity;
	}
	void setCapacity(int capacity) {
		this.capacity = capacity;
	}
	String getWashMode() {
		return washMode;
	}
	void setWashMode(String washMode) {
		this.washMode = washMode;
	}
//	display
	void display() {
		System.out.println("Capacity is "+this.capacity);
		System.out.println("Wash mode is "+this.washMode);
	}
	void start(){
		System.out.println("Starts motors");
	}
}//class WashingMachine ends here
class TestApplication {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Application a1=new Application();
			Refridgerator r1=new Refridgerator(101,"Lg","Silver",1,-10);
			WashingMachine w1=new WashingMachine(102,"Samsung","Black",8,"ten");
			r1.start();
			w1.start();
	}

}
