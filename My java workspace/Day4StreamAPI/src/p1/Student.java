package p1;

public class Student {
	
	int rollNo;
	String name;
	float marks;
	String gender;
//	Constructor
	public Student() {
		this.rollNo = 0;
		this.name = "not given";
		this.marks = 0;
		this.gender = "not given";
	}
	public Student(int rollNo, String name, float marks, String gender) {
		this.rollNo = rollNo;
		this.name = name;
		this.marks = marks;
		this.gender = gender;
	}
//	Setters and Getters
	public int getRollNo() {
		return rollNo;
	}
	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public float getMarks() {
		return marks;
	}
	public void setMarks(float marks) {
		this.marks = marks;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	
}
