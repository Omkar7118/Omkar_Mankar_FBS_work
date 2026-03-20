class BankAccount{
	int accountno;
	String name;
	double balance;
//	constructor
	BankAccount() {
		this.accountno = 0;
		this.name = "Not given";
		this.balance = 0;
	}
	BankAccount(int accountno, String name, double balance) {
		this.accountno = accountno;
		this.name = name;
		this.balance = balance;
	}
//	setters and getters
	int getAccountno() {
		return accountno;
	}
	void setAccountno(int accountno) {
		this.accountno = accountno;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	double getBalance() {
		return balance;
	}
	void setBalance(double balance) {
		this.balance = balance;
	}
//	display
	void display() {
		System.out.println("Account no is "+this.accountno);
		System.out.println("Name is "+this.name);
		System.out.println("Balance is "+this.balance);
	}
}//class BankAccount ends here
class SavingAccount extends BankAccount{
	double interest;
//	constructor
	SavingAccount() {
		super();
		this.interest = 0;
	}
	SavingAccount(int accountno, String name, double balance,double interest) {
		super(accountno,name,balance);
		this.interest = interest;
	}
//	setter and getter
	double getInterest() {
		return interest;
	}
	void setInterest(double interest) {
		this.interest = interest;
	}
//	display
	void display() {
		super.display();
		System.out.println("Interest is "+this.interest);
	}
}
class LoanAccount extends BankAccount{
	double loanAmount;
	double interest;
	String duration;
//	constructor
	LoanAccount() {
		this.loanAmount = 0;
		this.interest = 0;
		this.duration = "No loan";
	}
	LoanAccount(int accountno, String name, double balance,double loanAmount, double interest, String duration) {
		super(accountno,name,balance);
		this.loanAmount = loanAmount;
		this.interest = interest;
		this.duration = duration;
	}
//	setters and getters
	double getLoanAmount() {
		return loanAmount;
	}
	void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}
	double getInterest() {
		return interest;
	}
	void setInterest(double interest) {
		this.interest = interest;
	}
	String getDuration() {
		return duration;
	}
	void setDuration(String duration) {
		this.duration = duration;
	}
//	display 
	void display() {
		super.display();
		System.out.println("Loan amount is "+this.loanAmount);
		System.out.println("Loan interest is "+this.interest);
		System.out.println("Loan duration is "+this.duration);
	}
}//class LoanAccount ends here
class TestBankAccount {
	public static void main(String[] args) {
			BankAccount b1=new BankAccount();
			SavingAccount s1=new SavingAccount(101,"Omkar",50000,7);
			LoanAccount l1=new LoanAccount(102,"Aditya",10000,50000,10,"2 years");
			b1.display();
			s1.display();
			l1.display();
	}

}
