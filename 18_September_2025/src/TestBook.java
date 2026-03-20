import java.util.Scanner;
class Book{
	int id;
	String name;
	String author;
	String category;
	double price;
	float rating;
//	default constructor
	Book() {
		this.id = 0;
		this.name = "Not Given";
		this.author = "Not Given";
		this.category = "Not Given";
		this.price = 0;
		this.rating = 0;
	}
//	parameterized constructors
	Book(int id, String name, String author, String category, double price, float rating) {
		this.id = id;
		this.name = name;
		this.author = author;
		this.category = category;
		this.price = price;
		this.rating = rating;
	}
//	getters
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	String getAuthor() {
		return author;
	}
	void setAuthor(String author) {
		this.author = author;
	}
	String getCategory() {
		return category;
	}
//	setter
	void setCategory(String category) {
		this.category = category;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	float getRating() {
		return rating;
	}
	void setRating(float rating) {
		this.rating = rating;
	}
	void display() {
		System.out.println("\nBook details");
		System.out.println("Id : "+this.id);
		System.out.println("Name : "+this.name);
		System.out.println("Author : "+this.author);
		System.out.println("Price : "+this.price);
		System.out.println("Rating : "+this.rating);
	}
	
}// class book ends here
class Library{
	int counter=0;
	Scanner sc=new Scanner(System.in);
	Book[] b=new Book[10];
	Library() {
	    for(int i=0;i<b.length;i++) {
	        b[i]=new Book();
	    }
		b[counter++] = new Book(101, "Java", "James", "Programming", 499.99, 4.5f);
		b[counter++] = new Book(102, "C", "Dennis", "Programming", 299.99, 4.0f);
		b[counter++] = new Book(103, "Python", "Guido", "Programming", 599.99, 4.8f);
		b[counter++] = new Book(104, "DBMS", "Navathe", "Database", 699.99, 4.2f);
		b[counter++] = new Book(105, "OS", "Galvin", "System", 399.99, 3.9f);
	}
	void addBook(){	
		int id;
		String name;
		String author;
		String category;
		double price;
		float rating;	
		int count;
		System.out.print("Enter number of books to add : ");
		count=sc.nextInt();
		if(counter + count > b.length) {
		    System.out.println("Not enough space! You can only add " + (b.length - counter) + " more books.");
		    return;
		}
		System.out.println("Enter book details :-");
		for(int i=0;i<count;i++)
		{
			System.out.print("Enter book id : ");
			id=sc.nextInt();
			sc.nextLine();
			System.out.print("Enter book name : ");
			name=sc.next();
			sc.nextLine();
			System.out.print("Enter book author : ");
			author=sc.next();
			sc.nextLine();
			System.out.print("Enter book category : ");
			category=sc.next();
			sc.nextLine();
			System.out.print("Enter book price : ");
			price=sc.nextDouble();
			System.out.print("Enter book rating : ");
			rating=sc.nextFloat();	
			System.out.println();
			b[counter].setId(id);
			b[counter].setName(name);
			b[counter].setAuthor(author);
			b[counter].setCategory(category);
			b[counter].setPrice(price);
			b[counter].setRating(rating);
			counter++;
		}
	}
	void removeBook(){	
		int tempId;
		boolean found=false;
		System.out.print("Enter book id to remove book : ");
		tempId=sc.nextInt();
		for(int i=0;i<counter;i++){
			if(b[i].id==tempId){	
				for(int j=i;j<counter-1;j++){
					b[j]=b[j+1];
				}
	            b[counter - 1] = new Book(); 
	            counter--;
	            found = true;
	            System.out.println("Book removed successfully.");
	            break;
			}
		}
		if(found==false) {
			System.out.println("Book not found");
		}
		
	}
	void searchBook()
	{
		int tempId;
		boolean found=false;
		String temp_name;
		System.out.println("Enter ");
		System.out.print("Id : ");
		tempId=sc.nextInt();
		sc.nextLine();
		System.out.print("Name : ");
		temp_name=sc.next();
		for(int i=0;i<counter;i++)
		{
			if(tempId==b[i].getId()||b[i].getName().equalsIgnoreCase(temp_name)==true)
			{
				System.out.println("Book id or name are found \nBook details are"
						+ "");
				System.out.println("Book id="+b[i].getId());
				System.out.println("Book name:"+b[i].getName());
				System.out.println("Book author name:"+b[i].getAuthor());
				System.out.println("Book Category:"+b[i].getCategory());
				System.out.println("Book Price="+b[i].getPrice());
				System.out.println("Book Rating="+b[i].getRating());
				found=true;
			}	
		}
		if(found==false) {
			System.out.println("Not found");
		}
	}
	void showAuthor()
	{
		String temp_name;
		boolean found=false;
		System.out.print("Enter author name : ");
		temp_name=sc.next();
		for(int i=0;i<counter;i++)
		{
			if(b[i].getAuthor().equalsIgnoreCase(temp_name)==true)
			{
				System.out.println("Book name is "+b[i].getName());
				found=true;
			}
		}
		if(found==false) {
		    System.out.println("No books found for this author.");
		}
	}
	void showCategory()
	{
		String temp_category;
		boolean found=false;
		System.out.print("Enter category : ");
		temp_category=sc.next();
		for(int i=0;i<counter;i++)
		{
			if(b[i].getCategory().equalsIgnoreCase(temp_category)==true)
			{
				System.out.println("Book name is "+b[i].getName());
				found=true;
			}
		}
		if(found==false) {
		    System.out.println("No books found for this category.");
		}
	}
	void updateBook()
	{	
		int no,temp_id;
		float temp_rating;
		double temp_price;
		System.out.println("Enter \n1.price \n2.rating");
		no=sc.nextInt();
		if(no==1)
		{
			System.out.print("Enter book id you want to update : ");
			temp_id=sc.nextInt();
			System.out.print("Enter price : ");
			temp_price=sc.nextDouble();
			for(int i=0;i<counter;i++)
			{
				if(b[i].getId()==temp_id)
				{
					b[i].setPrice(temp_price);
				}
			}
			System.out.println("Book updated successfully!");
		}
		else if(no==2)
		{
			System.out.print("Enter book id you want to update : ");
			temp_id=sc.nextInt();
			System.out.print("Enter rating : ");
			temp_rating=sc.nextFloat();
			for(int i=0;i<counter;i++)
			{
				if(b[i].getId()==temp_id)
				{
					b[i].setRating(temp_rating);
				}
			}
			System.out.println("Book updated successfully!");
		}
		else
		{
			System.out.println("Enter valid number");
		}
	}
	void displaySort()
	{	
		int a;
		Book temp=new Book();
		double temp_price;
		float temp_rating;
		System.out.print("Enter \n1.Sort price\n2.Sort rating");
		a=sc.nextInt();
		if(a==1)
		{
			for(int j=0;j<counter;j++)
			{
			for(int i=0;i<counter-1;i++)
			{
				if(b[i].getPrice()>b[i+1].getPrice())
				{
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;
				}
			}
		}
			System.out.println("--- Sorted Books by Price ---");
			for(int i=0;i<counter;i++)
			{
				System.out.println((i+1)+" book details are ");
				System.out.println("Book name: "+b[i].getName());
				System.out.println("Book Price= "+b[i].getPrice());
			}
		}
		else if(a==2)
		{
			for(int j=0;j<counter;j++)
			{
			for(int i=0;i<counter-1;i++)
			{
				if(b[i].getRating()>b[i+1].getRating())
				{
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;
				}
			}
		}
			System.out.println("--- Sorted Books by Rating ---");
			for(int i=0;i<counter;i++)
			{
				System.out.println((i+1)+" book details are ");
				System.out.println("Book name: "+b[i].getName());
				System.out.println("Book rating= "+b[i].getRating());
			}
		}
		else
		{
			System.out.println("Enter valid number");	
		}
	}
	void display()
	{
		for(int i=0;i<counter;i++)
		{
			b[i].display();
		}
	}
}
class TestBook {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		Library l=new Library();
		int choice,a;
		do
		{
			System.out.println("Enter");
			System.out.println("1.Add book");
			System.out.println("2.Remove book");
			System.out.println("3.Search book");
			System.out.println("4.Show Author's book");
			System.out.println("5.Show Category's Books");
			System.out.println("6.Update Book Data");
			System.out.println("7.Display Sorted Books");
			System.out.println("8.Display All Books");
			choice=sc.nextInt();
			if(choice==1)
			{
				l.addBook();
			}
			else if(choice==2)
			{
				l.removeBook();
			}
			else if(choice==3)
			{
				l.searchBook();
			}
			else if(choice==4)
			{
				l.showAuthor();
			}
			else if(choice==5)
			{
				l.showCategory();
			}
			else if(choice==6)
			{
				l.updateBook();
			}
			else if(choice==7)
			{
				l.displaySort();
			}
			else if(choice==8)
			{
				l.display();
			}
			else
			{
				System.out.println("Enter valid number");			
			}
			System.out.print("Enter 1 to continue or 0 to exit : ");
			a=sc.nextInt();	
		}while(a==1);
		sc.close();
	}

}//class TestBook ends here
