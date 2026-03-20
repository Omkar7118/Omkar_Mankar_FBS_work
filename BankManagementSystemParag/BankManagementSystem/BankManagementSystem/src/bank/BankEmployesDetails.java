package bank;

import java.awt.Menu;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class BankEmployesDetails {
	Scanner sc=new Scanner(System.in);
    static ArrayList<BankEmployee> bankEmployees = new ArrayList<BankEmployee>();
   
    static {
    	bankEmployees.add(new BankEmployee(201, "Neha Patil", "neha@123", Designation.BRANCH_MANAGER));
    	bankEmployees.add(new BankEmployee(202, "Ramesh Joshi", "ramesh@456", Designation.CUSTOMER_SERVICE_EXECUTIVE));
    	bankEmployees.add(new BankEmployee(203, "Priya Singh", "priya@789", Designation.CUSTOMER_SERVICE_EXECUTIVE));
    	bankEmployees.add(new BankEmployee(204, "Sanjay Kulkarni", "sanjay@321", Designation.CUSTOMER_SERVICE_EXECUTIVE));
    }
    
//    Methods
    
    void verifyUser(int id,String password) {
    	HomePage homepage=new HomePage();
    	boolean found=false;
    	Designation designation=null; 
    	for(BankEmployee employee : bankEmployees) {
    		if(employee.getEmployeeId()==id&&employee.getPassword().equals(password)){
    			found=true;
    			designation=employee.getDesignation();
    		}
    	}
    	if(found) {
    		System.out.println("Login successfully");
    		homepage.verifyDesignation(designation);
    	}

    	else
    		System.out.println("Login failed try again");
    }
    
    void addEmployee(int employeeId, String employeeName, String password, Designation designation) {
    	BankEmployee newEmployee=new BankEmployee();
    	bankEmployees.add(newEmployee);  	
    }
    
    void removeEmployee() {
        System.out.println("Enter employee ID: ");
        int id = sc.nextInt();

        Iterator<BankEmployee> it = bankEmployees.iterator();
        boolean removed = false;

        while(it.hasNext()) {
            BankEmployee employee = it.next();
            if(employee.getEmployeeId() == id) {
                it.remove(); 
                removed = true;
                System.out.println("Employee removed successfully: " + employee.getEmployeeName());
                break;
            }
        }

        if(!removed) {
            System.out.println("Employee with ID " + id + " not found.");
        }
    }
}
