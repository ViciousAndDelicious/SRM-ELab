import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       
       Scanner sc = new Scanner(System.in);
       
       int i, j, rows=sc.nextInt();  
			
	       for (i = 1; i <= rows; i++)   
			{  
			for (j = 1; j <= i; j++)   
			{   
			System.out.print(j+" ");   
			}  
		
			for (j = i-1; j >= 1; j--)  
			{  
				System.out.print(j+" ");  
			}  
			System.out.println();  
		}  	
		
	}
}