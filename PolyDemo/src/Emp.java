
class Emp
{
	int id;
	String name;
	double salary;
	void setId(int a)
	{
		this.id=a;
	}
	void setName(String str)
	{
		this.name=str;
	}
	void setSalary(double b)
	{
		this.salary=b;
	}
	double getSalary()
	{
		return this.salary;
	}
	void display()
	{
		System.out.println("\nId is "+this.id);
		System.out.println("Name is "+this.name);
		System.out.println("Salary is "+this.salary);
	}
	Emp()
	{
		this.id=100;
		this.name="Unknown";
		this.salary=0;
	}
	Emp(int a,String s,double b)
	{
		this.id=a;
		this.name=s;
		this.salary=b;
	}
	double calSal() {
		return this.salary;
	}
		
}//class Emp ends here
class Hrm extends Emp
{
	double commission;
	//constructors
	Hrm()
	{
		super();
		this.commission=0;
	}
	Hrm(int a,String s,double b,double c)
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
	double calSal() {
		super.calSal();
		return this.salary+this.commission;
	}

}//class Hrm ends here

class SalesManager extends Emp
{
	int target;
	double incentive;
//	construtors
	SalesManager(){
			super();
			this.target = 0;
			this.incentive = 0;
		}
	SalesManager(int a,String s,double b,int target, double incentive) {
		super(a,s,b);
		this.target = target;
		this.incentive = incentive;
	}
// setters	
	void setIncentive(double c)
	{
		this.incentive=c;
	}
	void setTarget(int d)
	{
		this.target=d;
	}
//	getters
	double getIncentive()
	{
		return this.incentive;
	}
	int getTarget()
	{
		return this.target;
	}
	void display()
	{
		super.display();
		System.out.println("Id is "+this.incentive);
		System.out.println("Target is "+this.target);		
	}
	double calSal() {
		super.calSal();
		return this.salary+this.incentive;
	}

}//class SalesManager ends here
class Admin extends Emp
{
	
	double allowance;
	//setters	
	void setAllowance(double c)
	{
		this.allowance=c;
	}
	//getters
	double getAllowance()
	{
		return this.allowance;
	}
	//display
	void display()
	{	
		super.display();
		System.out.println("Allowance is "+this.allowance);
	}
	//constructors
	Admin()
	{
		super();
		this.allowance=0;
	}
	Admin(int a,String s,double b,double c)
	{
		super(a,s,b);
		this.allowance=c;
	}
	double calSal() {
		super.calSal();
		return this.salary+this.allowance;
	}
}//class Admin ends here
class AreaManager extends SalesManager
{
	String Area;

	AreaManager() {
		super();
		Area ="Unknown";
	}

	AreaManager(int a,String s,double b,int target, double incentive,String area) {
		super(a,s,b,target,incentive);
		Area = area;
	}
//	getters
	String getArea() {
		return Area;
	}
// setters
	void setArea(String area) {
		Area = area;
	}
	void display()
	{
		super.display();
		System.out.println("Area is : "+this.Area);
	}
	double calSal() {
		super.calSal();
		return this.salary;
	}
}//class Area ends here
class TestEmp{
	public static void main(String[] args)
	{
		Emp e1=new Emp(101,"Sachin",20000);
		System.out.println("Salary is"+e1.calSal());
		e1 =new SalesManager(104,"Rahul",30000,300,30); //upcasting
		System.out.println("Salary is"+e1.calSal());
		e1 =new Admin(103,"Virat",40000,400); // upcasting
		System.out.println("Salary is"+e1.calSal());
	}

}
