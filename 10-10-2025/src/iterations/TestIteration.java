package iterations;

import java.util.ArrayList;
import java.util.Iterator;

public class TestIteration {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<String> cities=new ArrayList<String>();
		cities.add("Pune");
		cities.add("Mumbai");
		cities.add("Delhi");
//		for(String city : cities) {
//			if(city.equals("Pune")) 
//				cities.remove("Pune");
//		}
//			System.out.println(cities);
			System.out.println("Hello");
			
			Iterator<String> myit=cities.iterator();
			
			while(myit.hasNext()) {
				String city= myit.next();
				if(city.equals("Pune")) {
					myit.remove();
				}
			}
			System.out.println(cities);
	}

}
