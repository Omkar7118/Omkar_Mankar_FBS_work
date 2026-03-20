package bank;

public class Bank {
	int bankCode;
	String bankName;
	String address;
	int noOfEmployee;
	
//	Constructors
	
	public Bank() {
		this.bankCode = 0;
		this.bankName = "Not Given";
		this.address = "Not given";
		this.noOfEmployee = 0;
	}
	
	public Bank(int bankCode, String bankName, String address, int noOfEmployee) {
		this.bankCode = bankCode;
		this.bankName = bankName;
		this.address = address;
		this.noOfEmployee = noOfEmployee;
	}

//	Setters and Getters
	
	public int getBankCode() {
		return bankCode;
	}

	public void setBankCode(int bankCode) {
		this.bankCode = bankCode;
	}

	public String getBankName() {
		return bankName;
	}

	public void setBankName(String bankName) {
		this.bankName = bankName;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public int getNoOfEmployee() {
		return noOfEmployee;
	}

	public void setNoOfEmployee(int noOfEmployee) {
		this.noOfEmployee = noOfEmployee;
	}
	
//	Methods
	
	void addEmployee(){
		this.noOfEmployee++;
	}
	
	void removeEmployee() {
		this.noOfEmployee--;
	}
	
	void displayBankDetails() {
		System.out.println("Bank code is "+this.bankCode);
		System.out.println("Bank name is "+this.bankName);
		System.out.println("Bank address is "+this.address);
		System.out.println("Number of employees in bank are "+this.noOfEmployee);
	}
	
	
}
