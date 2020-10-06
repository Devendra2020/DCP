/* 
Problem statement -Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,median=0;
	cin>>n;
	priority_queue<int >pq;
	priority_queue<int,vector<int>,greater<int>> pqm;
	
	while(n--)
	{
	    int no;
	    cin>>no;
	    if(pq.size()==0)
	    {
	        pq.push(no);
	    }
	    else if(no<=pq.top())
	    {
	        pq.push(no);
	        if(pq.size()-pqm.size()>1)
	        {
	            pqm.push(pq.top());
	            pq.pop();
	        }
	    }
	    else
	    {
	        pqm.push(no);
	        if(pqm.size()-pq.size()>0)
	        {
	            pq.push(pqm.top());
	            pqm.pop();
	        }
	    }
	    if(pq.size()==pqm.size())
	    median=(pq.top()+pqm.top())/2;
	    else
	    median=pq.top();
	    cout<<median<<endl;
	}
	return 0;
}