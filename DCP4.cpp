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