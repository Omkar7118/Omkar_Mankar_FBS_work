package p1;

public class hr extends Emp
{
	double commission;
	//constructors
	hr()
	{
		super();
		this.commission=0;
	}
	public hr(int a,String s,double b,double c)
	{
		super(a,s,b);
		this.id=a;
		this.name=s;
		this.salary=b;
		this.commission=c;
	}
	//setters
	void setCommission(double c)
	{
		this.commission=c;
	}
	//getters
	double getCommision()
	{
		return this.commission;
	}
	//display
	void display()
	{
		super.display();
		System.out.println("Commission is "+this.commission);
	}
	public double calSal() {
		return this.salary+this.commission;
	}

}//class hr ends here
