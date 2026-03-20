package p3;

import java.util.TreeSet;

import p1.Emp;

public class TestBinarySet {
	public static void main(String[] args) {
		TreeSet t1=new TreeSet();
		t1.add(new Emp(10,"Sachin",20000));
		t1.add(new Emp(18,"Virat",25000));
		System.out.println(t1);
	}
}
