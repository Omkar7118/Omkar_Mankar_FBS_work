package b2;

import java.time.LocalDate;

public class SavingAccount extends BankAccount 
{	     
		double minimumBalance;
	    double interestRate;
	    
	    //constructors
		SavingAccount() 
		{
			super();
			this.minimumBalance = 0.0;
			this.interestRate = 0.0;
		}
		SavingAccount(int accountNumber, String accountHolderName, String accountType, double currentBalance,
				LocalDate accountOpeningDate, String accountStatus,double minimumBalance, double interestRate)
		{
			super( accountNumber,  accountHolderName,  accountType,  currentBalance,
					 accountOpeningDate,  accountStatus);
			this.minimumBalance = minimumBalance;
			this.interestRate = interestRate;
		}
		//setters and getters
		double getMinimumBalance() {
			return minimumBalance;
		}
		void setMinimumBalance(double minimumBalance) {
			this.minimumBalance = minimumBalance;
		}
		double getInterestRate() {
			return interestRate;
		}
		void setInterestRate(double interestRate) {
			this.interestRate = interestRate;
		}
		//display
		@Override
		void displayAccountDetails()
		{
			super.displayAccountDetails();
			System.out.println("Minimum Balance : " + this.minimumBalance);
	        System.out.println("Interest Rate   : " + this.interestRate);
		}
		//methods 
	    void checkPenalty()
	    {
	    	if(this.currentBalance < this.minimumBalance)
	    	{
	    		System.out.println("Balance below minimum balance Penalty applicable.");
	    	}
	    	else
	    	{
	    		 System.out.println("No penalty.");
	    	}
	    }
	    void calculateInterest()
	    {
	    	double interest = this.currentBalance * (this.interestRate / 100);
	        System.out.println("Interest : " +interest);	
	    }
	    void applyInterest()
	    {
	    	double interest= this.currentBalance * (this.interestRate/ 100);
	    	
	    	this.currentBalance = this.currentBalance + interest;
	    	
	    	System.out.println("New Balance after applying interest : "+this.currentBalance);
	    }
}//class SavingAccount ends here
