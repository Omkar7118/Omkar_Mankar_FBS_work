package p1;

import java.util.ArrayList;
import java.util.Collections;

public class TestComparotor {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Student> a1=new ArrayList<Student>();
		a1.add(new Student(3,65,"Omkar"));
		a1.add(new Student(1,75,"Parag"));
		a1.add(new Student(2,85,"Kunal"));
		MyStudentComaparatortRoll r=new MyStudentComaparatortRoll();
		Collections.sort(a1,r);
		System.out.println(a1);
		MyStudentComaparatortMarks m=new MyStudentComaparatortMarks();
		Collections.sort(a1,m);
		System.out.println(a1);
		MyStudentComaparatortName n=new MyStudentComaparatortName();
		Collections.sort(a1,n);
		System.out.println(a1);
	}

}
