package p1;

import java.io.*;

public class FileDemo {

	public static void mainw(String[] args) {
		// TODO Auto-generated method stub
		try {
			FileOutputStream fos=new FileOutputStream("D://13-10-2025//Data.txt");
			DataOutputStream dos=new DataOutputStream(fos);
			ObjectOutputStream oos=new ObjectOutputStream(dos);
			oos.writeObject(new Student(10,"Sachin",100));
			System.out.println("Written Succcessfully");
			
		}
		catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		catch(IOException e) {
			e.printStackTrace();
		}
	}
	public static void main(String[] args) {
		try {
			FileInputStream fis=new FileInputStream("D://13-10-2025//Data.txt");
			DataInputStream dis=new DataInputStream(fis);
			ObjectInputStream ois=new ObjectInputStream(dis);
			Student s=(Student)ois.readObject();
			System.out.println(s);
			}
		catch(IOException e) {
			e.printStackTrace();
		}
		catch(ClassNotFoundException e) {
			e.printStackTrace();	
		}
	}
}
