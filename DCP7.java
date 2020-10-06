/*
Problem Statement - Given the mapping a = 1, b = 2, ... z = 26, and an encoded message,
count the number of ways it can be decoded.For example, the message '111' would give 3, 
since it could be decoded as 'aaa', 'ka', and 'ak'.

INPUT  - 121,1234 
OUTPUT - 3, 3,
*/
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