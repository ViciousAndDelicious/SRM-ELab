import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       
       Scanner sc = new Scanner(System.in);

       int n = sc.nextInt();
       int K = sc.nextInt(); 
       int A[] = new int[n];
       
       for (int i=0; i<n; i++) {
         A[i] = sc.nextInt();
       }
       
       int freq[] = new int[K]; 
  
       for (int i = 0; i < n; i++) 
          ++freq[A[i] % K]; 
  
       int sum = freq[0] * (freq[0] - 1) / 2; 
  

       for (int i = 1; i <= K / 2 && i != (K - i); i++) 
         sum += freq[i] * freq[K - i]; 

       if (K % 2 == 0) 
         sum += (freq[K / 2] * (freq[K / 2] - 1) / 2); 
       
       System.out.print(sum); 
       
		
	}
}