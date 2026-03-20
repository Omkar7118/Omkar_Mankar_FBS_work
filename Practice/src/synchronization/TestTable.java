package synchronization;

class Table{
	
	int number;
	
//	Constructor
	public Table() {
		this.number = 0;
	}
	
	public Table(int number) {
		this.number = number;
	}
	
//	Setters and Getters
	public int getNumber() {
		return number;
	}

	public void setNumber(int number) {
		this.number = number;
	}
	
//	Methods
	public void printTable() {
		for(int i=1;i<=10;i++) {
			System.out.println(this.number*i);
		}
	}
	
}//Class Table ends here



public class TestTable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
