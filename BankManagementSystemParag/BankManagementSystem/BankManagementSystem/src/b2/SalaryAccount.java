package b2;

import java.time.LocalDate;

public class SalaryAccount extends BankAccount 
{
     String employeeName;
     String companyName;
     LocalDate salaryCreditDate;
     
     //constructors
	SalaryAccount() 
	{
		super();
		this.employeeName = "Not Given";
		this.companyName = "Not Given" ;
		this.salaryCreditDate = LocalDate.now();
	}

	SalaryAccount(int accountNumber, String accountHolderName, String accountType, double currentBalance,
			LocalDate accountOpeningDate, String accountStatus,String employeeName, String companyName, LocalDate salaryCreditDate)
	{
		super( accountNumber,  accountHolderName,  accountType,  currentBalance,
				 accountOpeningDate,  accountStatus);
		this.employeeName = employeeName;
		this.companyName = companyName;
		this.salaryCreditDate = salaryCreditDate;
	}
	//setters and getters
	String getEmployeeName() {
		return employeeName;
	}

	void setEmployeeName(String employeeName) {
		this.employeeName = employeeName;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	LocalDate getSalaryCreditDate() {
		return salaryCreditDate;
	}

	void setSalaryCreditDate(LocalDate salaryCreditDate) {
		this.salaryCreditDate = salaryCreditDate;
	}
    //display
	 @Override
	 void displayAccountDetails() 
	 {
	        super.displayAccountDetails();
	        System.out.println("Employee Name      : " + this.employeeName);
	        System.out.println("Company            : " + this.companyName);
	        System.out.println("Salary Credit Date : " + this.salaryCreditDate);
	 }
	//methods
	 void creditSalary(double salaryAmount, LocalDate CreditDate)
	 {
		 this.currentBalance += salaryAmount;
		 
		 System.out.println("Salary credit date : "+CreditDate);
		 System.out.println("Salary credit amount: "+salaryAmount);
		 System.out.println("New Balance after salary credited : "+this.currentBalance);
	 }
}//class SalaryAccount ends here
