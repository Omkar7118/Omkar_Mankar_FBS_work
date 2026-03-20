class Employee{
	int empId;
	String empName;
	double salary;
//	default constructor
	Employee() {
		this.empId=100;
		this.empName="Not Given";
		this.salary=20000;
	}
//	parameterized constructor
	Employee(int emp_id, String emp_name, double salary) {
		this.empId = emp_id;
		this.empName = emp_name;
		this.salary = salary;
	}
//	Getters
	int getEmpId() {
		return empId;
	}
	void setEmpId(int empId) {
		this.empId = empId;
	}
	String getEmpName() {
		return empName;
	}
//	Setters
	void setEmpName(String empName) {
		this.empName = empName;
	}
	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	void display()
	{	
		System.out.println("Id : "+this.empId);
		System.out.println("Name : "+this.empName);
		System.out.println("Salary : "+this.salary);
	}   
}
class TestEmp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee employee1=new Employee();
		employee1.display();
	}
}
