

/*
Problem Statement - Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.


*/


#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,sum,flag =0;
	    cin >> n >> sum;
	    int a[n];
	    for(int i = 0;i<n;i++)
	        cin >> a[i];
	    for(int i=0;i < n;i++){
	        for(int j = 1;j<n;j++){
	            if(a[i]+a[j] == sum)
	                {
	                 flag = 1;
	                 break;
	                    
	                }
	        }
	        if(flag == 1)
	             {
	                 cout << "Yes" << endl;
	                 break;
	             }
	    }
	    if(flag == 0)
	    cout << "No" << endl;
	}
	return 0;
}