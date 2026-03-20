package p1;

import java.util.Comparator;

public class MyStudentComaparatortName implements Comparator{

	@Override
	public int compare(Object o1, Object o2) {
		// TODO Auto-generated method stub
		Student s1=(Student)o1;
		Student s2=(Student)o2;
		s1.name.compareTo(s2.name);
		return 0;
	}

}
