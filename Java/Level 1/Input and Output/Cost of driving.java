import java.text.DecimalFormat;
import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) {
       DecimalFormat df2 = new DecimalFormat("#.##");
       Scanner sc = new Scanner(System.in);
       double d = sc.nextDouble();
       double f = sc.nextDouble();
       double p = sc.nextDouble();

       double cost = (d/f)*p;
       System.out.print(String.format("%.2f",cost));
	
	}
}