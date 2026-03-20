import java.io.*;

public class ReadAndWriteFile {

	public static void main(String[] args){
		String str =null;
		try(BufferedReader br=new BufferedReader(new FileReader("D://14-10-2025//demo1.txt"))) {
			
			str=br.readLine();
			System.out.println(str);
			
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		
		try(BufferedWriter bw=new BufferedWriter(new FileWriter("D://14-10-2025//demo2.txt"))) {
			
			bw.write(str);
		}
		catch(IOException e) {
			e.printStackTrace();
		}
				
	}

}
