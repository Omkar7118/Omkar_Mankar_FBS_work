class Worker extends Thread
{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		String numbers="1234567890987654321";
		for(int i=0;i<numbers.length();i++)
		{
			System.out.print(" "+numbers.charAt(i));
		}
	}
}
public class DemoThread {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Worker w=new Worker();
		String alphabets="abcdefghijklmnopkrswqz";
		w.start();
		for(int i=0;i<alphabets.length();i++)
		{
			System.out.print(" "+alphabets.charAt(i));
		}
	}

}
