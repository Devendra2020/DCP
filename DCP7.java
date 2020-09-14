/*package whatever //do not write package name here */

import java.lang.*;
import java.util.*;
import java.io.*;
class GFG {
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	
	    int t = sc.nextInt();
	    
	    while (t > 0) {
	
	        int n = sc.nextInt();
	
	        String s = sc.next();
	
	        int[] dp = new int[s.length() + 1];
    
            dp[0] = 1;
            dp[1] = s.charAt(0) == '0' ? 0 : 1;
    
            for (int i = 2; i <= s.length(); i++) {
                int first = Integer.valueOf(s.substring(i - 1, i));
                int second = Integer.valueOf(s.substring(i - 2, i));
                if (first >= 1 && first <= 9) {
                    dp[i] += dp[i - 1];
                }
                if (second >= 10 && second <= 26) {
                    dp[i] += dp[i - 2];
                }
            }
            System.out.println(dp[s.length()]);
	        t--;
	    }
	}
}