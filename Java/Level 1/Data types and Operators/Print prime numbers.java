import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       System.out.println("First "+n+" prime numbers are :-");
       for (int i = 2; i < 1000; i++) {
         int flag = 0;
         int m = i/2;
         for (int j = 2; j<=m; j++) {
           if (i%j==0) {
             flag = 1;
             break;
           }
         }
         if (flag==0&&n!=0) {
           System.out.println(i);
           --n;
         }
       }
     }
}