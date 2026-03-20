package p1;

public class A {
	public void myFunctionA() {
		System.out.println("Inside A");
	}
}//class A ends here

class B extends A {
	void myFunctionB() {
		System.out.println("Inside B");
		A ref=new A();
		ref.myFunctionA();
	}
}//class B ends here

class C {
	void myFunctionC() {
		System.out.println("Inside C");
		A ref=new A();
		ref.myFunctionA();
	}
}//class C ends here
