class Student
{	
	int fbs_id;
	String s_name;
	double distance_travelled;	
	static int student_count;
	static
	{
		student_count=0;
	}
	//constructors
	Student()
	{
		this.fbs_id=0;
		this.s_name="Unknown";
		this.distance_travelled=0;
		student_count++;
	}
	Student(int i,String n,double d)
	{
		this.fbs_id=i;
		this.s_name=n;
		this.distance_travelled=d;
		student_count++;
	}
	//setters
	void setFbsId(int i)
	{
		this.fbs_id=i;
	}
	void setName(String n)
	{
		this.s_name=n;
	}
	void setDistanceTravelled(double d)
	{
		this.distance_travelled=d;
	}
	//getters
	int getFbsId()
	{
		return this.fbs_id;
	}
	String getName()
	{
		return this.s_name;
	}
	double getDistanceTrvelled()
	{
		return this.distance_travelled;
	}
	static int getStudentCount()
	{
		return student_count;
	}
	//display
	void display()
	{
		System.out.println("\nFbs id is "+this.fbs_id);
		System.out.println("Name is "+this.s_name);	
		System.out.println("Distance travelled is "+this.distance_travelled);
		System.out.println("Student count is "+student_count);
	}
}//class Student ends here
class PlacedStudent extends Student
{
 	String designation,companyName;
// 	constructors
	PlacedStudent() {
		super();
		this.designation = "not given";
		this.companyName = "not given";
	}
	
	PlacedStudent(int i,String n,double d,String designation, String companyName) {
	super(i,n,d);
	this.designation = designation;
	this.companyName = companyName;
}

	String getDesignation() {
		return designation;
	}

	void setDesignation(String designation) {
		this.designation = designation;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	void display()
	{
		super.display();
		System.out.println("Company Name is "+this.companyName);
		System.out.println("Designation is "+this.designation);
	}	
}//class PlacedStudent ends here
class TestStudent
{
	public static void main(String[] args)
	{
		Student s1=new Student(1,"Sachin",300);
		s1.display();
		Student s2=new Student();
		s2.display();
		PlacedStudent ps1=new PlacedStudent(2,"Rahul",300,"Bcci","batsman");
		ps1.display();
	}
}//class TestStudent ends here
