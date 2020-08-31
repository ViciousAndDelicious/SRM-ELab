import java.io.*;
import java.util.*;
public class TestClass {
  public static void main(String[] args) { 
    Scanner sc = new Scanner(System.in);
    double principal = sc.nextDouble();
    double interest = sc.nextDouble();
    double tax = sc.nextDouble();
    double desired = sc.nextDouble();
    int years = 0;  
    while (principal < desired) {
      principal += principal * interest * (1 - tax);
      years++;
    }
    System.out.println(years);
  }
		
}