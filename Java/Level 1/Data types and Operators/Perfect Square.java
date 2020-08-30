import java.io.*;
import java.lang.Math;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       double temp = Math.sqrt(n);
       if ((int)temp == temp) {
         System.out.println("Yes");
       }
       else {
         System.out.println("No");
       }
       
	}
}