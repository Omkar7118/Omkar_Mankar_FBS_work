interface Product{
	void sell();
	void buy();
}//interface Product ends here

interface Traveller{
	void traveller();
}//interface traveller ends here

class Animal implements Product{
	public void sell() {
		System.out.println("Sell animal");
	}
	public void buy() {
		System.out.println("Buy animal");
	}
}//class Animal ends here

class Vehicle implements Product,Traveller{

	@Override
	public void traveller() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void sell() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void buy() {
		// TODO Auto-generated method stub
		
	}
	
}

class hourse extends Animal{
	
}
