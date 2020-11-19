#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,k;
	cin>>n>>k;
	int total=0;
	for(int i=0;i<n;i++)
	{
	    
	    int x;
	    cin>>x;
	    int count=0;
	    while(x>0)
	    {
	       int rem=x%10;
	       if(rem==7 || rem==4)
	       {
	           count++;
	       }
	       x=x/10;
	    }
	    if(count<=k)
	    {
	       total++; 
	    }
	}
    std::cout << total << std::endl;
    
	return 0;
}
