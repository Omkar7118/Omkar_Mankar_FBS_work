package bank;

import java.util.Scanner;

public class Login {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		BankEmployesDetails employee=new BankEmployesDetails();
		System.out.println("Login Menu");
		System.out.print("Enter Login id : ");
		int id=sc.nextInt();
		sc.nextLine();
		System.out.print("Enter Password : ");
		String password=sc.next();
		employee.verifyUser(id, password);
	}
}
