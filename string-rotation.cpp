#include<bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	
	int n,k;
	scanf("%d%d",&n,&k);
	
    vector<int> v(n); 
	
    for(int i=0;i<n;i++)
      scanf("%d",&v[i]);
	
	k=k%n;
	
	int t = n-k;
	
	for(int i=t;i<n;i++)
	   cout<<v[i]<<" ";
	   
    for(int i=0;i<t;i++)
       cout<<v[i]<<" ";

	
	// scanf("%d",&k);
	
	
    	
	return 0;
}