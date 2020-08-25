import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int basic = sc.nextInt();
       float hra = (basic*80)/100;
       float da = (basic*40)/100;
       float bonus = (hra*25)/100;
       float res = (float)basic + hra + da + bonus;
       System.out.print("Total Salary= "+res);
     }
}