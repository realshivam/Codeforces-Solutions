#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  
 
   int n;
   cin>>n;
    int xsum=0;
     int ysum=0;
     int zsum=0;
   while(n--)
   {
 
       int x;      
       int y;    
       int z;
 
       cin>>x;
       xsum+=x;
       cin>>y;
       ysum+=y;
       cin>>z;
       zsum+=z;
 
 
   }
 
   if(xsum==0 && ysum==0 && zsum==0)
   {
       cout<<"YES";
   }
   else{
 
       cout<<"NO";
   }
 
    return 0;
}
