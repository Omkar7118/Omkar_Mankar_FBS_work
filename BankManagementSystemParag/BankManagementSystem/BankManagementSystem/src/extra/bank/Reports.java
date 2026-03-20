package extra.bank;
import java.time.LocalDate;

public class Reports {
	LocalDate dateTime;
	double totalDeposit;
	double totalWithdraw;
	double totalLoanDistributed;
	double totalEmiCollected;
	double totalAmount;
	double totalActiveLoans;
	
	// Default Constructor
	
	public Reports() {
		this.dateTime = null;
		this.totalDeposit = 0;
		this.totalWithdraw = 0;
		this.totalLoanDistributed = 0;
		this.totalEmiCollected = 0;
		this.totalAmount = 0;
		this.totalActiveLoans = 0;
	}

	// Parameter Constructor
	
	public Reports(LocalDate dateTime, double totalDeposite, double totalwithdraw, double totalLoanDistributed,
			double totalEmiCollected, double totalAmount, double totalActiveLoans) {
		this.dateTime = dateTime;
		this.totalDeposit = totalDeposite;
		this.totalWithdraw = totalwithdraw;
		this.totalLoanDistributed = totalLoanDistributed;
		this.totalEmiCollected = totalEmiCollected;
		this.totalAmount = totalAmount;
		this.totalActiveLoans = totalActiveLoans;
	}
	
	// Getters and Setters

	public LocalDate getDateTime() {
		return dateTime;
	}

	public void setDateTime(LocalDate dateTime) {
		this.dateTime = dateTime;
	}

	public double getTotalDeposite() {
		return totalDeposit;
	}

	public void setTotalDeposite(double totalDeposite) {
		this.totalDeposit = totalDeposite;
	}

	public double getTotalwithdraw() {
		return totalWithdraw;
	}

	public void setTotalwithdraw(double totalwithdraw) {
		this.totalWithdraw = totalwithdraw;
	}

	public double getTotalLoanDistributed() {
		return totalLoanDistributed;
	}

	public void setTotalLoanDistributed(double totalLoanDistributed) {
		this.totalLoanDistributed = totalLoanDistributed;
	}

	public double getTotalEmiCollected() {
		return totalEmiCollected;
	}

	public void setTotalEmiCollected(double totalEmiCollected) {
		this.totalEmiCollected = totalEmiCollected;
	}

	public double getTotalAmount() {
		return totalAmount;
	}

	public void setTotalAmount(double totalAmount) {
		this.totalAmount = totalAmount;
	}

	public double getTotalActiveLoans() {
		return totalActiveLoans;
	}

	public void setTotalActiveLoans(double totalActiveLoans) {
		this.totalActiveLoans = totalActiveLoans;
	}
	
	// Calculate Reports
	
	public void calculateReports(Transaction[] transaction) {
		this.dateTime = LocalDate.now();
		double totalDeposit = 0;
	    double totalWithdraw = 0;
	    double totalLoan = 0;
	    double totalEmi = 0;
	    
	    for (Transaction t : transaction) {
	    	String type = t.getAccountType().toLowerCase();
	    	double amount = t.getAmount();
	    	
	    	if (type.equals("deposit")) {
	    		totalDeposit = totalDeposit + amount;
	    	}
	    	else if (type.equals("withdraw")) {
	    		totalWithdraw = totalWithdraw + amount;
	    	}
	    	else if (type.equals("loan")) {
	    		totalLoan = totalLoan + amount;
	    	}
	    	else if (type.equals("emi")) {
	    		totalEmi = totalEmi + amount;
	    	}
	    }
	    
	    this.totalDeposit = totalDeposit;
	    this.totalWithdraw = totalWithdraw;
	    this.totalLoanDistributed = totalLoan;
	    this.totalEmiCollected = totalEmi;
	    
	    this.totalActiveLoans = 3;
	    this.totalAmount = totalDeposit + totalEmi - totalWithdraw + totalLoan;
	    
	    System.out.println("Report Calculated Successfully for "+ dateTime);
		
	}
	
	// Display Reports
	
	public void displayReports() {
        System.out.println("------ All Day Transaction Report ------");
        System.out.println("Date: " + dateTime);
        System.out.println("Total Deposit: " + totalDeposit);
        System.out.println("Total Withdraw: " + totalWithdraw);
        System.out.println("Total Loan Distributed: " + totalLoanDistributed);
        System.out.println("Total EMI Collected: " + totalEmiCollected);
        System.out.println("Total Active Loans: " + totalActiveLoans);
        System.out.println("Net Bank Balance: " + totalAmount);
        System.out.println("--------------------------");
    }
	
}// Report class end here
