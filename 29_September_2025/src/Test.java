
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a=10;
		int b=2;
		int c;
		try {
			String fname=args[0];
			String lname=args[1];
			System.out.println("Name is "+fname+" "+lname);
			c=a/b;
			System.out.println("Answer is "+c);
		}
		catch(ArithmeticException ae) {
			System.out.println("Please do not give 0 as denominator");
		}
		catch(ArrayIndexOutOfBoundsException ar) {
			System.out.println("Please provide at least onr argument from console");
		}
		catch(Exception e) {
			System.out.println("Some problem occur");
		}
	}

}
