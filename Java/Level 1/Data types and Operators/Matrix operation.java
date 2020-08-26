import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       Scanner sc = new Scanner(System.in);
       int i,j,r,c, elem;
       r = sc.nextInt();
       c = sc.nextInt();
       
       for (i = 0; i < r; i++) {
         for (j = 0; j < c; j++) {
           elem = sc.nextInt();
           if(j==c-1 && i==r-1) {
             System.out.print(elem);
           }
           else
             System.out.print(elem+" ");             
         }
         System.out.println();
       }
		
	}
}