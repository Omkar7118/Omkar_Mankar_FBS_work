package p3;

import p1.Employee;
import p2.Admin;
import p2.Hr;
import p2.SalesManager;

public class Test {
	public static void main(String[] args) {
		Employee e1;
		Hr h1=new Hr(101,"Omkar",30000,3000);
		Admin a1=new Admin(102,"Sachin",40000,3200);
		SalesManager s1=new SalesManager(103,"Rahul",50000,40,3800);
		h1.display();
		System.out.println("Total salary is "+h1.calSal());
		a1.display();
		System.out.println("Total salary is "+a1.calSal());
		s1.display();
		System.out.println("Total salary is "+s1.calSal());
		
	}
}	
