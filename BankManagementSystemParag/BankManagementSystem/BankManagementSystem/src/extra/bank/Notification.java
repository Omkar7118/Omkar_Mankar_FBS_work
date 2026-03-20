package extra.bank;

import b2.BankAccount;

public class Notification {
	int notifictaionId;
	String messageContent;
	
//	BankAccount b = new BankAccount();
	
	// Default Constructor 
	
	public Notification() {
		this.messageContent = null;
	}
	
	// Parameter Constructor
	
	public Notification(String messageContent) {
		this.messageContent = messageContent;
	}
	
	// Setters and Getters
	
	public String getMessageContent() {
		return messageContent;
	}
	public void setMessageContent(String messageContent) {
		this.messageContent = messageContent;
	}
	
	// Notification 
	
	void sendNotification(Transaction transaction) {
		switch (transaction.getAccountType().toLowerCase()) {
			case "deposit": 
				messageContent = "Dear Customer, your account " + transaction.getAccountNumber() +
                        		 "\nhas been credited with ₹" + transaction.getAmount() +
                        		 "\non " + transaction.getDateTime() +
                        		 ". \nAvailable balance: ₹" + transaction.getAmount() + ".";
				break;
			
			
			case "withdraw": 
				messageContent = "Dear Customer, your account " + transaction.getAccountNumber() +
               		 			 "\nhas been credited with ₹" + transaction.getAmount() +
               		 			 "\non " + transaction.getDateTime() +
               		 			 ". \nAvailable balance: ₹" + transaction.getAmount() + ".";
				break;
			
			case "loan":
				messageContent = "Dear Customer, your loan of ₹" + transaction.getAmount() +
                				 "\nfor account " + transaction.getAccountNumber() +
                				 "\nhas been approved on " + transaction.getDateTime() + ".";
				break;
			
			case "emi":
				messageContent = "Dear Customer, your EMI payment of ₹" + transaction.getAmount() +
                				 "\nfor account " + transaction.getAccountNumber() +
                				 "\nhas been received on " + transaction.getDateTime() +
                				 ". \nAvailable balance: ₹" + transaction.getAmount() + ".";
		}
	}

}// Notification class end here
