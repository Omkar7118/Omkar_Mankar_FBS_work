class VoterException extends Exception {
	public String toString() {
		return "Invalid age";
	}
}
class Voter{
	int age;

	Voter(int age) {
		super();
		this.age = age;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this.age = age;
	}
	public void validAge() {
	try {
		if(this.age<18) {
			throw new VoterException();
		}
		else {
			System.out.println("Valid Age");
			}
	}
	catch(VoterException ve) {
		System.out.println(ve);
	}
	}
	
}
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Voter v1=new Voter(15);
		v1.validAge();
	}

}
