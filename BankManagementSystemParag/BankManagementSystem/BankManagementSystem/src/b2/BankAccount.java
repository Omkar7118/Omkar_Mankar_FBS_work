package b2;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;

public abstract class BankAccount 
{
	    int accountNumber; 
	    String accountHolderName; 
	    String accountType; 
	    double currentBalance; 
	    LocalDate accountOpeningDate;
	    String accountStatus; 
	    
	    //constructors
		BankAccount() 
		{
			this.accountNumber = 0;
			this.accountHolderName = "Not Given";
			this.accountType = "Not Given";
			this.currentBalance = 0.0;
			this.accountOpeningDate =  LocalDate.now();
			this.accountStatus = "Not Given";
		}
		BankAccount(int accountNumber, String accountHolderName, String accountType, double currentBalance,
				LocalDate accountOpeningDate, String accountStatus) 
		{
			this.accountNumber = accountNumber;
			this.accountHolderName = accountHolderName;
			this.accountType = accountType;
			this.currentBalance = currentBalance;
			this.accountOpeningDate = accountOpeningDate;
			this.accountStatus = accountStatus;
		}
		//setters and getters
		int getAccountNumber() {
			return accountNumber;
		}
		void setAccountNumber(int accountNumber) {
			this.accountNumber = accountNumber;
		}
		String getAccountHolderName() {
			return accountHolderName;
		}
		void setAccountHolderName(String accountHolderName) {
			this.accountHolderName = accountHolderName;
		}
		String getAccountType() {
			return accountType;
		}
		void setAccountType(String accountType) {
			this.accountType = accountType;
		}
		double getCurrentBalance() {
			return currentBalance;
		}
		void setCurrentBalance(double currentBalance) {
			this.currentBalance = currentBalance;
		}
		LocalDate getAccountOpeningDate() {
			return accountOpeningDate;
		}
		void setAccountOpeningDate(LocalDate accountOpeningDate) {
			this.accountOpeningDate = accountOpeningDate;
		}
		String getAccountStatus() {
			return accountStatus;
		}
		void setAccountStatus(String accountStatus) {
			this.accountStatus = accountStatus;
		}
		//display
		void displayAccountDetails()
		{
		        System.out.println("***************** Bank Account Details ***********************");
		        System.out.println("Account Number        : " + this.accountNumber);
		        System.out.println("Account Holder Name   : " + this.accountHolderName);
		        System.out.println("Account Type          : " + this.accountType);
		        System.out.println("Current Balance       : " + this.currentBalance);
		        System.out.println("Account Opening Date  : " + this.accountOpeningDate);
		        System.out.println("Account Status        : " + this.accountStatus);
		 
		}
		//methods
		void updateStatus(String str)
		{
			 	setAccountStatus(str);
			 	System.out.println("***************Status Updated**************");
		}
		void checkBalance()
		{
			System.out.println("Current Balance : " + this.currentBalance);
		}
		
		void deposit(double amount)
		{
		        this.currentBalance += amount;
		        System.out.println("Amount Deposited : " + amount);
		}
		void withdraw(double amount)
		{
		        if (amount <= this.currentBalance) 
		        {
		            this.currentBalance -= amount;
		            System.out.println("Amount Withdrawn : " + amount);
		        } else 
		        {
		            System.out.println("Insufficient balance!");
		        }
		 }
		
		//hardcoded accounts
		static ArrayList<BankAccount> accounts = new ArrayList<>();
		static {
		    accounts.add(new SavingAccount(101, "Alice", "Saving", 5000, LocalDate.now(), "Active", 1000, 3.5));
		    accounts.add(new CurrentAccount(102, "Bob", "Current", 10000, LocalDate.now(), "Active", 5000, 0));
		    accounts.add(new SalaryAccount(103, "Charlie", "Salary", 15000, LocalDate.now(), "Active", "Charlie", "TechCorp", LocalDate.now()));
		    accounts.add(new PersonalLoan(104, "David", "Loan", 2000, LocalDate.now(), "Active", "Engineer", 800000, 300000, 300000, 12.5, 24, 0, 24, "Home Renovation", true));
		    accounts.add(new BusinessLoan(105, "Eva", "Loan", 5000, LocalDate.now(), "Active", "Trader", 1000000, 700000, 700000, 11.0, 36, 0, 36, "Retail", 5));
		   
		}
		
		//add account methods
		public static void addSavingAccount(SavingAccount account) {
		    accounts.add(account);
		    System.out.println("Saving Account added for: " + account.getAccountHolderName());
		}

		public static void addCurrentAccount(CurrentAccount account) {
		    accounts.add(account);
		    System.out.println("Current Account added for: " + account.getAccountHolderName());
		}

		public static void addSalaryAccount(SalaryAccount account) {
		    accounts.add(account);
		    System.out.println("Salary Account added for: " + account.getAccountHolderName());
		}

		public static void addPersonalLoanAccount(PersonalLoan account) {
		    accounts.add(account);
		    System.out.println("Personal Loan Account added for: " + account.getAccountHolderName());
		}

		public static void addBusinessLoanAccount(BusinessLoan account) {
		    accounts.add(account);
		    System.out.println("Business Loan Account added for: " + account.getAccountHolderName());
		}

		//remove account methods
		public static void removeSavingAccount(int accNumber) {
		    Iterator<BankAccount> it = accounts.iterator();
		    while (it.hasNext()) {
		        BankAccount acc = it.next();
		        if (acc.getAccountNumber() == accNumber && acc instanceof SavingAccount) {
		            it.remove();
		            System.out.println("Saving Account removed: " + accNumber);
		            return;
		        }
		    }
		    System.out.println("Saving Account not found: " + accNumber);
		}
		
		public static void removeCurrentAccount(int accNumber) {
		    Iterator<BankAccount> it = accounts.iterator();
		    while (it.hasNext()) {
		        BankAccount acc = it.next();
		        if (acc.getAccountNumber() == accNumber && acc instanceof CurrentAccount) {
		            it.remove();
		            System.out.println("Current Account removed: " + accNumber);
		            return;
		        }
		    }
		    System.out.println("Current Account not found: " + accNumber);
		}

		
		public static void removeSalaryAccount(int accNumber) {
		    Iterator<BankAccount> it = accounts.iterator();
		    while (it.hasNext()) {
		        BankAccount acc = it.next();
		        if (acc.getAccountNumber() == accNumber && acc instanceof SalaryAccount) {
		            it.remove();
		            System.out.println("Salary Account removed: " + accNumber);
		            return;
		        }
		    }
		    System.out.println("Salary Account not found: " + accNumber);
		}

	
		public static void removePersonalLoanAccount(int accNumber) {
		    Iterator<BankAccount> it = accounts.iterator();
		    while (it.hasNext()) {
		        BankAccount acc = it.next();
		        if (acc.getAccountNumber() == accNumber && acc instanceof PersonalLoan) {
		            it.remove();
		            System.out.println("Personal Loan Account removed: " + accNumber);
		            return;
		        }
		    }
		    System.out.println("Personal Loan Account not found: " + accNumber);
		}

	
		public static void removeBusinessLoanAccount(int accNumber) {
		    Iterator<BankAccount> it = accounts.iterator();
		    while (it.hasNext()) {
		        BankAccount acc = it.next();
		        if (acc.getAccountNumber() == accNumber && acc instanceof BusinessLoan) {
		            it.remove();
		            System.out.println("Business Loan Account removed: " + accNumber);
		            return;
		        }
		    }
		    System.out.println("Business Loan Account not found: " + accNumber);
		}


		
}//class BankAccount ends here 


