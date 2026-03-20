package extra.bank;
import java.time.LocalDate;
import java.util.ArrayList;

import b2.BankAccount;

public class Transaction {
	static int transactionId;
	int accountNumber;
    String accountType;
    double amount;
    LocalDate dateTime;
    String status;
    String transactionType;
    
    static ArrayList<Transaction> transactions = new ArrayList<Transaction>();
	
	static {
		transactionId = 100;
	}
	
	// Default Constructor
	
	public Transaction() {
		transactionId = 0;
		this.accountNumber = 0;
		this.accountType = null;
		this.amount = 0;
		this.dateTime = null;
		this.status = null;
		this.transactionType = null;
	}

	// Parameter Constructor
	
	public Transaction(int accountNumber, String accountType, double amount, LocalDate dateTime, String status, String transactionType) {
		this.accountNumber = accountNumber;
		this.accountType = accountType;
		this.amount = amount;
		this.dateTime = dateTime;
		this.status = status;
		this.transactionType = transactionType;
		transactionId++;
		transactions.add(this);
	}
	
	// Setters and Getters
	
	public static int getTransactionId() {
		return transactionId;
	}

	public static void setTransactionId(int transactionId) {
		Transaction.transactionId = transactionId;
	}

	public int getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}

	public String getAccountType() {
		return accountType;
	}

	public void setAccountType(String accountType) {
		this.accountType = accountType;
	}

	public double getAmount() {
		return amount;
	}

	public void setAmount(double amount) {
		this.amount = amount;
	}

	public LocalDate getDateTime() {
		return dateTime;
	}

	public void setDateTime(LocalDate dateTime) {
		this.dateTime = dateTime;
	}

	public String getStatus() {
		return status;
	}

	public void setStatus(String status) {
		this.status = status;
	}
	
	public String getTransactionType() {
		return transactionType;
	}

	public void setTransactionType(String transactionType) {
		this.transactionType = transactionType;
	}

	public String getTransactionDetails() {
	    String details = "===== All Transactions Details =====\n";

	    for (Transaction t : transactions ) {
	        details += "\nTransaction ID   : " + transactionId +
	                   "\nAccount Number   : " + t.getAccountNumber() +
	                   "\nAccount Holder   : " + t.getAccountNumber() +
	                   "\nAccount Type     : " + t.getAccountType() +
	                   "\nAmount           : " + t.getAmount() +
	                   "\nDate & Time      : " + LocalDate.now() +
	                   "\nStatus           : " + t.getStatus() +
	                   "\nTransaction Type : " + t.transactionType +
	                   "\n----------------------------------\n";
	    }

	    return details;
	}

	public void displayTransaction() {
        System.out.println("==================================");
        System.out.println("        Transaction Summary       ");
        System.out.println("==================================");
        System.out.println(getTransactionDetails());
        System.out.println("==================================\n");
    }

	
}// Transaction class end here
