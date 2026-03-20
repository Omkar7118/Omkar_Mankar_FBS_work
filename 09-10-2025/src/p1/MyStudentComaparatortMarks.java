package p1;

import java.util.Comparator;

public class MyStudentComaparatortMarks implements Comparator{
	public int compare(Object o1, Object o2) {
		// TODO Auto-generated method stub
		Student s1=(Student)o1;
		Student s2=(Student)o2;
		return (int) (s1.marks-s2.marks);
	}
}
