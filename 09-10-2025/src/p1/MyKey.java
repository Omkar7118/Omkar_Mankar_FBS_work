package p1;

public class MyKey implements Comparable {
	
	int key;

	public MyKey(int key) {
		super();
		this.key = key;
	}

	public int getKey() {
		return key;
	}

	public void setKey(int key) {
		this.key = key;
	}

	public int compareTo(Object o) {
		// TODO Auto-generated method stub
		MyKey m=(MyKey)o;
		return this.key-m.key;
	}

	@Override
	public String toString() {
		return "MyKey = "+this.key+"\n";
	}
	
}
