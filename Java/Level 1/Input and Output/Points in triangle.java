import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       Scanner sc = new Scanner(System.in);
       int x = sc.nextInt();
       int y = sc.nextInt();
       int flag = 0;
       if (x>200||x<0) {
         flag = 1;
       }
       if (y<0||y>100) {
         flag = 1;
       }
       if (flag==1) {
         System.out.print("The point is not in the triangle");
       }
       else {
         System.out.print("The point is in the triangle");
       }
	}
}