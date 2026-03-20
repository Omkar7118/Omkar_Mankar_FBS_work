package p2;

import p1.Employee;

public class Admin extends Employee {
	double allowance;
	//setters	
	public void setAllowance(double c)
	{
		this.allowance=c;
	}
	//getters
	public double getAllowance()
	{
		return this.allowance;
	}
	//display
	public void display()
	{	
		super.display();
		System.out.println("Allowance is "+this.allowance);
	}
	//constructors
	public Admin()
	{
		super();
		this.allowance=0;
	}
	public Admin(int a,String s,double b,double c)
	{
		super(a,s,b);
		this.allowance=c;
	}
	public double calSal() {
		super.calSal();
		return this.salary+this.allowance;
	}
}//class Admin ends here
