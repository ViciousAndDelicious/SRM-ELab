import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       Scanner sc = new Scanner(System.in);
       int num = sc.nextInt(); 
       int dec_value = 0; 
       int base = 1; 
       int temp = num; 
       while (temp > 0) { 
         int last_digit = temp % 10; 
         temp = temp / 10; 
         dec_value += last_digit * base; 
         base = base * 8; 
       } 
       System.out.println(dec_value);
	}
}