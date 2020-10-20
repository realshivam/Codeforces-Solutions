

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
    long int n;
    
    cin>>n;
    
    
   if(n>=0)
   {
       cout << n;
   }
   else{
       
       long int n1=n/10;
       long int n2=(n/100)*10+((n%100)%10);

        cout<<max(n1,n2);

   }
    
  

    return 0;
}
