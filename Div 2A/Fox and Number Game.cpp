#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}


int main() {
	  
    int n;
    cin>>n;
    int arr[n];
     int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
       
        
    }
    int prev=arr[0];
    for(int i=1;i<n;i++)
    {
    
        prev=gcd(prev,arr[i]);
        
    }
    std::cout << n*prev << std::endl;
   
   
	
	return 0;
}
