class Document{
	String title;
	int size;
//	constructor
	Document() {
		this.title = "Not given";
		this.size=0;
	}
	Document(String sender, int size) {
		this.title = sender;
		this.size= size;
	}
//	setter and getter
	String getSender() {
		return title;
	}
	void setSender(String sender) {
		this.title = sender;
	}
	int getSize() {
		return size;
	}
	void setSize(int size) {
		this.size = size;
	}
	void open() {
		System.out.print("Opens ");
	}
}//class Documents ends here
class Pdf extends Document{
//	constructor
	Pdf() {
		super();
	}
	Pdf(String title, int size) {
		super(title,size);
	}
	void open() {
		super.open();
		System.out.println("in PDF reader ");
	}
}//class Pdf ends here
class WordFile extends Document{
//	constructors
	WordFile() {
		super();
	}
	WordFile(String title, int size) {
		super(title,size);
	}
	void open() {
		super.open();
		System.out.println("in MS Word");
	}
}//class Wordfile ends here
class ExcelFile extends Document{
//	constructors
	ExcelFile() {
		super();
	}
	ExcelFile(String title, int size) {
		super(title,size);
	}
	void open() {
		super.open();
		System.out.println("in MS Excel");
	}
}//class ExcelFile ends here
class TestDocument {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Document d1=new Document();
		ExcelFile e1=new ExcelFile("Excel file",5);
		WordFile w1=new WordFile("Word file",10);
		Pdf p1=new Pdf("Pdf",15);
		d1.open();
		e1.open();
		w1.open();
		p1.open();
	}

}
