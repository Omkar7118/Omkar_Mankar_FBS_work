package p3;

import java.util.Scanner;

import p1.Admin;
import p1.Emp;
import p1.SalesManager;
import p1.hr;
import p2.EmpDao;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		EmpDao edao=new EmpDao();
		Scanner sc=new Scanner(System.in);
		int choice;
		do {
			System.out.println("\nEnter");
			System.out.println("1.Add employee");
			System.out.println("2.Update employee");
			System.out.println("3.Remove employee");
			System.out.println("4.Search employee");
			System.out.println("5.Sort employee");
			System.out.println("6.Calculate salary ");
			System.out.println("7.Display employees");
			System.out.println("Enter 0 to exit");
			choice=sc.nextInt();
			

		switch(choice) {
			case 1:
				edao.addEmp();
				break;
				
			case 2:
				edao.updateEmp();
				break;
				
			case 3:
				edao.removeEmp();
				break;
		
			case 4:
				edao.searchEmp();
				break;
				
			case 5:
				edao.sortEmp();
				break;
			case 6:
				edao.calSalEmp();
				break;
				
			case 7:
				edao.displayEmp();
				break;
			}
		}while(choice!=0);
	}
}
