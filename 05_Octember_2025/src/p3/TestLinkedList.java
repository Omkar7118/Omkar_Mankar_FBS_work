package p3;

import java.util.LinkedList;

import p1.Emp;

public class TestLinkedList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList a1=new LinkedList();
		a1.add(new Emp(701,"Rahul",36000));
		a1.add(new Emp(702,"Sohum",42000));
		a1.add(new Emp(703,"Komal",38000));
		System.out.println(a1);
	}

}
