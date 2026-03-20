package p1;

import java.io.Serializable;

public class Student implements Serializable 
{
	int rollNo;
	String name;
	double marks;
	
//	Constructors
	
	public Student() {

	}
	
	public Student(int rollNo, String name, double marks) {
		this.rollNo = rollNo;
		this.name = name;
		this.marks = marks;
	}

//	Methods
	
	public String toString() {
		return "Student [rollNo=" + rollNo + ", name=" + name + ", marks=" + marks + "]";
	}
	
}//class Student ends here
