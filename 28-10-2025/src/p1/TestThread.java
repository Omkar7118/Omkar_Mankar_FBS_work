package p1;

class Worker implements Runnable
{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		String numbers="1234567890987654321";
		for(int i=0;i<numbers.length();i++)
		{
			System.out.println(" "+numbers.charAt(i));
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
 class TestThread {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Worker w=new Worker();
		Thread t=new Thread(w);
		String alphabets="abcdefghijklmnopkrswqz";
		t.start();
		for(int i=0;i<alphabets.length();i++)
		{
			System.out.print(" "+alphabets.charAt(i));
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}


