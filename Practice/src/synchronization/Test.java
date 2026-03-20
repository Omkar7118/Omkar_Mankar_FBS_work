package synchronization;

import java.util.Scanner;

class SharedResources implements Runnable{
	Scanner sc=new Scanner(System.in);
	
//	Methods
	synchronized void print(){
		System.out.println("Thread is waiting");
		try {
			wait();
		}catch(InterruptedException e) {
			System.out.println(e);
		}
		System.out.println("Thread is resume after notification");
	}
	
	synchronized void resume() {
		System.out.println("Thread is notifying");
		notify();
	}

	public void run() {
		System.out.println("Enter 1 to print and 2 for resume");
		int i=sc.nextInt();
		if(i==1)
			print();
		else if(i==2)
			resume();
	}
	
}

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SharedResources shared=new SharedResources();
		Thread t1=new Thread(shared);
		Thread t2=new Thread(shared);
        t1.start(); 
        try {
            Thread.sleep(1000);
        } catch (Exception e) {}
        t2.start();
	}

}
