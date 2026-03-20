package p2;

import p1.Employee;

public class Hr extends Employee {
	public double commission;
	//constructors
	public Hr()
	{
		super();
		this.commission=0;
	}
	public Hr(int a,String s,double b,double c)
	{
		super(a,s,b);
		this.id=a;
		this.name=s;
		this.salary=b;
		this.commission=c;
	}
	//setters
	public void setCommission(double c)
	{
		this.commission=c;
	}
	//getters
	public double getCommision()
	{
		return this.commission;
	}
 // display
	public void display()
	{
		super.display();
		System.out.println("Commission is "+this.commission);
	}
	public double calSal() {
		super.calSal();
		return this.salary+this.commission;
	}

}//class Hr ends here
