#include <bits/stdc++.h>

using namespace std;

long long int removezero(long long int n)
{
    
    long long int c=0;
    long long int fin=0;
    while(n>0)
    {
        if(n%10!=0)
        {
            fin+=(n%10)*pow(10,c);
            c++;
        }
        
        n/=10;
    }
    
    return fin;
    
}

int main() {
    
    long long int n1;
    long long int n2;
    cin>>n1>>n2;
    long long int sum1=n1+n2;
    
    n1=removezero(n1);
     n2=removezero(n2);
     sum1=removezero(sum1);
     
     if(n1+n2==sum1)
     {
         std::cout << "YES" << std::endl;
     }
     else{
          std::cout << "NO" << std::endl;
     }
    
   
	return 0;
}
