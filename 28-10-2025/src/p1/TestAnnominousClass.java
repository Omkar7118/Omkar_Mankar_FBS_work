package p1;

interface Discount
{
	void discount();
}

class Mall implements Discount
{

	@Override
	public void discount() {
		System.out.println("30% Discount");
	}
	
}

public class TestAnnominousClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Mall m1=new Mall();
		m1.discount();
		
		new Discount() {

			@Override
			public void discount() {
				// TODO Auto-generated method stub
				System.out.println("80% Discount");
			}
			
		}.discount();
	}

}
