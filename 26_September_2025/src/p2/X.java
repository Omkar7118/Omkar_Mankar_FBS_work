package p2;

import p1.A;

class X{
	void myFunctionX() {
		System.out.println("Inside X");
		A ref=new A();
		ref.myFunctionA();
	}
}//class X ends here

class Y extends p1.A {
	void myFunctionY() {
		System.out.println("Inside Y");
		A ref=new A();
		ref.myFunctionA();
	}
}//class Y ends here
