
class MarksException extends Exception{
	public String toString() {
		return "Invalid marks please enter marks between 0 to 100";
	}
}

class Mark{
	int marks;
	
	Mark(int marks) {
		super();
		this.marks = marks;
	}

	int getMarks() {
		return marks;
	}

	void setMarks(int marks) {
		this.marks = marks;
	}
	public void validMarks() {
		try {
			if(this.marks>=0&&this.marks<=35) {
				System.out.println("Failed");
			}
			else if(this.marks>=35&&this.marks<=49) {
				System.out.println("Pass");
			}
			else if(this.marks>=50&&this.marks<=59) {
				System.out.println("Second class");
			}
			else if(this.marks>=60&&this.marks<=74) {
				System.out.println("First class");
			}
			else if(this.marks>=75&&this.marks<=100) {
				System.out.println("Distinct");
			}
			else {
				throw new MarksException();
			}
		}
		catch(MarksException me){
			System.out.println(me);
		}
		
	}
}

public class MarkTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Mark m1=new Mark(-1);
		m1.validMarks();
		
	}

}
