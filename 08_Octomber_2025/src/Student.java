
import java.util.*;

class Student implements Comparable{
	
	int roll_no;
	double marks;
	String name;
	
	public int compareTo(Student s1) {
		// TODO Auto-generated method stub
		System.out.println("Inside comapreTo");
		return this.roll_no-s1.roll_no;
	}

	public int getRoll_no() {
		return roll_no;
	}

	public void setRoll_no(int roll_no) {
		this.roll_no = roll_no;
	}

	public double getMarks() {
		return marks;
	}

	public void setMarks(double marks) {
		this.marks = marks;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	Student() {
		super();
		this.roll_no = 0;
		this.marks = 0;
		this.name = "not given";
	}
	Student(int roll_no, double marks, String name) {
		super();
		this.roll_no = roll_no;
		this.marks = marks;
		this.name = name;
	}

	@Override
	public String toString() {
		return "Student roll_no=" + roll_no + ", marks=" + marks + ", name=" + name+"\n";
	}

	@Override
	public int compareTo(Object o) {
		// TODO Auto-generated method stub
		return 0;
	}
	public boolean equals(Object obj) {
		Student s1=(Student)obj;
		System.out.println("Inside equals");
		if(this.roll_no==s1.roll_no) {
			return true;
		}
		else {
			return false;
		}
	}
	public int hashCode() {
		System.out.println("Inside hashcode");
		return this.roll_no;
	}
}
 class Test{
	public static void main1(String[] args) {
		HashSet <Student> h1=new HashSet <Student>();
		h1.add(new Student(3,65,"Omkar"));
		h1.add(new Student(1,75,"Parag"));
		h1.add(new Student(2,85,"Kunal"));
		System.out.println(h1);
		
	}
	public static void main(String[] args) {
		ArrayList<Student> a1=new ArrayList<Student>();
		a1.add(new Student(3,65,"Omkar"));
		a1.add(new Student(1,75,"Parag"));
		a1.add(new Student(2,85,"Kunal"));
		System.out.println("Before sorting");
		for(Student s1 : a1) {
			System.out.println(s1.getName());
		}
		Collections.sort(a1);
		System.out.println("After sorting");
		for(Student s1 : a1) {
			System.out.println(s1.getName());
		}
	}
}