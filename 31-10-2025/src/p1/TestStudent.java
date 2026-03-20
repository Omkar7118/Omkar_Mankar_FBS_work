package p1;

public class TestStudent {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		PayFees[] students= {new OnlineStudent(),new DemoStudent(),new OfflineStudent()};
		
		for(PayFees st:students)
		{
			st.payOnline();
			st.payOffline();
		}
		
	}

}
