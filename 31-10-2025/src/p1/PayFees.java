package p1;

public interface PayFees {

	public void payOnline();
	
	public default void payOffline() {
		System.out.println("Hello");
	}
}
