package p1;

public abstract class Employee {
	public int id;
	public String name;
	public double salary;
	public void setId(int a)
	{
		this.id=a;
	}
	public void setName(String str)
	{
		this.name=str;
	}
	public void setSalary(double b)
	{
		this.salary=b;
	}
	public double getSalary()
	{
		return this.salary;
	}
	public void display()
	{
		System.out.println("\nId is "+this.id);
		System.out.println("Name is "+this.name);
		System.out.println("Salary is "+this.salary);
	}
	public Employee()
	{
		this.id=100;
		this.name="Unknown";
		this.salary=0;
	}
	public Employee(int a,String s,double b)
	{
		this.id=a;
		this.name=s;
		this.salary=b;
	}
	public double calSal() {
		return this.salary;
	}
		
}//class Employee ends here

