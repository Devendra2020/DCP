/*
Problem statement - Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

*/



#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n+1]={};
	    for (int i=0;i<n;i++){
	        int b;cin>>b;
	        if (b>0 && b<=n)
	        a[b]++;
	    }
	    int ans=n+1;
	    for (int i=1;i<=n;i++)
	    if (a[i]==0){
	        ans=i;
	        break;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}