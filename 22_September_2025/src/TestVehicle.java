abstract class Vehicle {
	int vehicleNo;
	String brand,color,fuelType;
	Vehicle() {
		super();
		this.vehicleNo = 0;
		this.brand = "Unknown";
		this.color = "Unknown";
		this.fuelType = "Not given";
	}
	Vehicle(int vehicleNo, String brand, String color, String fuelType) {
		super();
		this.vehicleNo = vehicleNo;
		this.brand = brand;
		this.color = color;
		this.fuelType = fuelType;
	}
	int getVehicleNo() {
		return vehicleNo;
	}
	void setVehicleNo(int vehicleNo) {
		this.vehicleNo = vehicleNo;
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
	String getFuelType() {
		return fuelType;
	}
	void setFuelType(String fuelType) {
		this.fuelType = fuelType;
	}
	abstract void brake();
}//class Vehicle ends here
class Car extends Vehicle {
	int noOfDoors;
	float bootSpace;
	Car() {
		super();
		this.noOfDoors = 0;
		this.bootSpace = 0;
	}
	Car(int vehicleNo, String brand, String color, String fuelType,int noOfDoors, float bootSpace) {
		super(vehicleNo,brand,color,fuelType);
		this.noOfDoors = noOfDoors;
		this.bootSpace = bootSpace;
	}
	int getNoOfDoors() {
		return noOfDoors;
	}
	void setNoOfDoors(int noOfDoors) {
		this.noOfDoors = noOfDoors;
	}
	float getBootSpace() {
		return bootSpace;
	}
	void setBootSpace(float bootSpace) {
		this.bootSpace = bootSpace;
	}
	void brake() {
		System.out.println("Disc brake is applied");
	}
}//class Car ends here
class Bike extends Vehicle{
	float engineCC;
	String type;
	Bike() {
		this.engineCC = 0;
		this.type = "Not given";
	}
	Bike(int vehicleNo, String brand, String color, String fuelType,float engineCC, String type) {
		super(vehicleNo,brand,color,fuelType);
		this.engineCC = engineCC;
		this.type = type;
	}
	void brake() {
		System.out.println("Drum brake is applied");
	}
}//class Bike ends here
class TestVehicle{
	public static void main(String[] args) {
		Bike b1=new Bike(101,"Tvs","Grey","Petrol",160,"Naked Sport");
		b1.brake();
		Car c1=new Car(102,"Audi","Black","Diesal",4,500);
		c1.brake();
	}
}

