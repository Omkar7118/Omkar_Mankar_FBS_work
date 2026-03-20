package p2;

import p1.Emp;
import p1.SalesManager;
import p1.hr;
import p1.Admin;
import java.util.Scanner;

public class EmpDao {
	Scanner sc=new Scanner(System.in);
	static Emp[] empArr;
	static int empCount;
	static {
		empCount=-1;
		empArr=new Emp[20];
		// ----- HR Employees -----
		empArr[++empCount] = new hr(101, "Omkar", 50000, 5000);
		empArr[++empCount] = new hr(102, "Amit", 48000, 4500);
		empArr[++empCount] = new hr(103, "Sneha", 47000, 4000);

		// ----- Sales Managers -----
		empArr[++empCount] = new SalesManager(201, "Karan", 60000, 12, 8000);
		empArr[++empCount] = new SalesManager(202, "Meena", 58000, 15, 7500);
		empArr[++empCount] = new SalesManager(203, "Rohit", 62000, 10, 9000);

		// ----- Admin Employees -----
		empArr[++empCount] = new Admin(301, "Pragati", 70000, 10000);
		empArr[++empCount] = new Admin(302, "Isha", 68000, 9500);
		empArr[++empCount] = new Admin(303, "Pooja", 72000, 11000);
		empArr[++empCount] = new Admin(304, "Shubham", 75000, 12000);
	}
	public void addEmp() {
		int empType;
		System.out.println("Enter");
		System.out.println("1.Add Admin");
		System.out.println("2.Add HR");
		System.out.println("3.Add Sales Manager");
		empType=sc.nextInt();
		Emp e;
		switch(empType) {
		case 1 : 
			System.out.println("Admin");
			System.out.println("Enter employee id : ");
			int id=sc.nextInt();
			System.out.println("Enter employee name : ");
			String name=sc.next();
			System.out.println("Enter employee salary : ");
			double salary=sc.nextDouble();
			System.out.println("Enter employee allowance : ");
			double allowance=sc.nextDouble();
			e=new Admin(id,name,salary,allowance);
			
		case 2 : 
			System.out.println("HR");
			System.out.println("Enter employee id : ");
			int id1=sc.nextInt();
			System.out.println("Enter employee name : ");
			String name1=sc.next();
			System.out.println("Enter employee salary : ");
			double salary1=sc.nextDouble();
			System.out.println("Enter employee commision : ");
			double commision=sc.nextDouble();
			e=new hr(id1,name1,salary1,commision);
		
		case 3 : 
			System.out.println("Sales Manager");
			System.out.println("Enter employee id : ");
			int id11=sc.nextInt();
			System.out.println("Enter employee name : ");
			String name11=sc.next();
			System.out.println("Enter employee salary : ");
			double salary11=sc.nextDouble();
			System.out.println("Enter employee target : ");
			int target=sc.nextInt();
			System.out.println("Enter employee incentive : ");
			double incentive=sc.nextDouble();				
			e=new SalesManager(id11,name11,salary11,target,incentive);
			
		if(empCount<=20) {
			empArr[++empCount]=e;
			System.out.println("Employee added successfully");
		}
		else {
			System.out.println("Employee storage is full !!");
			}	
		}
	}
	public void removeEmp() {
		System.out.println("Enter employee id you want to remove : ");
		int tempId=sc.nextInt();
		for(int i=0;i<=empCount;i++)
		{
			if(empArr[i].getId()==tempId) {
				for(int j=i;j<empCount-1;j++) {
					empArr[j]=empArr[j+1];
				}
				empCount--;		
			}
		}
	}
	public void updateEmp() {
		System.out.println("Enter employee id you want to remove : ");
		int tempId=sc.nextInt();
		System.out.println("Enter");
		System.out.println("1.Id update");
		System.out.println("2.Name update");
		System.out.println("3.Salary update");
		int choice=sc.nextInt();
		switch(choice) {
		case 1:
			System.out.println("Enter id : ");
			int empId=sc.nextInt();
			for(int i=0;i<=empCount;i++)
			{
				if(empArr[i].getId()==tempId) {
					empArr[i].setId(empId);
					}	
				}
			break;
		case 2:
			System.out.println("Enter name : ");
			String empName=sc.next();
			for(int i=0;i<=empCount;i++)
			{
				if(empArr[i].getId()==tempId) {
					empArr[i].setName(empName);
					}	
				}
			break;
		case 3:
			System.out.println("Enter salary : ");
			double empSalary=sc.nextDouble();
			for(int i=0;i<=empCount;i++)
			{
				if(empArr[i].getId()==tempId) {
					empArr[i].setSalary(empSalary);
					}	
				}
			break;
			}
		System.out.println("Update successfully");
		}
	public void searchEmp() {
		System.out.println("Enter employee id you want to search : ");
		int tempId=sc.nextInt();
		boolean flag=false;
		for(int i=0;i<=empCount;i++)
		{
			if(empArr[i].getId()==tempId) {
				
				flag=true;
				break;
				}
			}
		if(flag==true) {
			System.out.println("Employee Found");
		}
		else {
			System.out.println("Employee not Found");
		}
	}
	public void sortEmp() {
		Emp temp=new Emp();
		for(int i=0;i<empCount;i++) {
			for(int j=i;j<empCount-1;j++) {
				temp=empArr[i];
				empArr[i]=empArr[i+1];
				empArr[i+1]=temp;
			}
		}
		System.out.println("Sorted successfully");
	}
	public void calSalEmp() {
		System.out.println("Enter emp id : ");
		int tempId=sc.nextInt();
		int index=0;
		for(int i=0;i<=empCount;i++)
		{
			if(empArr[i].getId()==tempId) {
					index=i;
				}
		}
		if(index!=0) {
			System.out.println("Total salary is "+empArr[index].calSal());
		}
		else {
			System.out.println("Enter valid employee id");
		}
	}
	public void displayEmp() {
		for(int i=0;i<empCount;i++){
			System.out.print(empArr[i].getId());
			System.out.print(" "+empArr[i].getName());
			System.out.println(" "+empArr[i].getSalary());
		}
	}
}
