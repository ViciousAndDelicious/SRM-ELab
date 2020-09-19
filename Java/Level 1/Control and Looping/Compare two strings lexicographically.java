import java.io.*;
import java.util.*;

public class TestClass {
	 public static void main(String[] args) { 
       
       Scanner sc = new Scanner(System.in);
       
       String A = sc.nextLine();
       String B = sc.nextLine();
              
       if(A.length()==B.length()) {
         System.out.println(A+" is equal to "+B);
       }
       
       else if (A.length()>B.length()) {
         System.out.println(A+" is greater than "+B);
       }
       
       else {
         System.out.println(A+" is less than "+B);
       }
        		
	}
}