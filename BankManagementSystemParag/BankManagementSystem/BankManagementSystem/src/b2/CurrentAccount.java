package b2;

import java.time.LocalDate;

public class CurrentAccount extends BankAccount
{
	double overdraftLimit;
    double overdraftUsed;
	
    //constructors
    CurrentAccount()
    {
		super();
		this.overdraftLimit = 0.0;
		this.overdraftUsed = 0.0;
	}
    CurrentAccount(int accountNumber, String accountHolderName, String accountType, double currentBalance,
			LocalDate accountOpeningDate, String accountStatus,double overdraftLimit, double overdraftUsed) 
    {
		super( accountNumber,  accountHolderName,  accountType,  currentBalance,
				 accountOpeningDate,  accountStatus);
		this.overdraftLimit = overdraftLimit;
		this.overdraftUsed = overdraftUsed;
	}
    //setters and getters
	double getOverdraftLimit() {
		return overdraftLimit;
	}
	void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}
	double getOverdraftUsed() {
		return overdraftUsed;
	}
	void setOverdraftUsed(double overdraftUsed) {
		this.overdraftUsed = overdraftUsed;
	}
    //display
	@Override
	void displayAccountDetails()
	{
		super.displayAccountDetails();
		System.out.println("Overdraft Limit : " + this.overdraftLimit);
        System.out.println("Overdraft Used  : " + this.overdraftUsed);
	}
	//methods
	 void checkOverDraft() 
	 {
		 System.out.println("Overdraft Used: " + overdraftUsed);
		 System.out.println("Overdraft Remaining: " + (overdraftLimit - overdraftUsed));
	 }
	 
}//class CurrentAccount ends here
