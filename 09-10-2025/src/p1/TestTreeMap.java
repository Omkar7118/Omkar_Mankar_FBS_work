package p1;

import java.util.TreeMap;

public class TestTreeMap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TreeMap tm=new TreeMap();
		tm.put(new MyKey(10),new Student(10,1000,"Sachin"));
		tm.put(new MyKey(3),new Student(3,500,"Raina"));
		tm.put(new MyKey(7),new Student(7,700,"Dhoni"));
		System.out.println(tm);
	}

}
