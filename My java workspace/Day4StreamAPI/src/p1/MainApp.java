package p1;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.stream.Collectors;

public class MainApp {
	public static void main(String[] args) {
		
		List<Student> allStudents=new ArrayList();
		allStudents.add(new Student(1,"Omkar",75,"M"));
		allStudents.add(new Student(2,"Kunal",80,"M"));
		allStudents.add(new Student(3,"Aditya",50,"M"));
		allStudents.add(new Student(4,"Geeta",90,"F"));
		allStudents.add(new Student(5,"Priyanka",85,"F"));
		
		HashMap<String,List<Student>> byName=(HashMap<String,List<Student>>)allStudents.stream().collect(Collectors.groupingBy(Student::getName));
		System.out.println(byName);
	}
}
