package p3;

import java.util.ArrayList;

import p1.Emp;

public class TestArrayList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList a1=new ArrayList();
		a1.add(new Emp(601,"Rahul",36000));
		a1.add(new Emp(602,"Sohum",42000));
		a1.add(new Emp(603,"Komal",38000));
		System.out.println(a1);
	}
	
}
