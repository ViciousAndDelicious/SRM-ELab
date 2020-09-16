import java.io.*;
import java.util.*;
public class TestClass {
	 public static void main(String[] args) { 
       Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] arr = new int[n][n];
        for(int i = 0; i < n; i++){
            String s = in.next();
            for(int j = 0; j < n; j++)
                arr[i][j] = Integer.parseInt(String.valueOf(s.charAt(j)));
        }
        for(int i = 1; i < n -1; i++){
            for(int j = 1; j < n - 1; j++){
                if(arr[i-1][j] < arr[i][j] && arr[i][j-1] < arr[i][j] && arr[i][j+1] < arr[i][j] && arr[i+1][j] < arr[i][j])
                    arr[i][j] = Integer.MAX_VALUE;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] == Integer.MAX_VALUE)
                    System.out.print("X");
                else
                    System.out.print(arr[i][j]);
            }
            System.out.println();
        }
	}
}