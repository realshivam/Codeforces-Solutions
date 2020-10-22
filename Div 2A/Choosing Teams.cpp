#include<bits/stdc++.h>
using  namespace std;
int main()
{

int n;
int k;

cin>>n>>k;

int arr[n];

for(int i=0;i<n;i++)
{
   cin>>arr[i]; 
}
int c=0;
for(int i=0;i<n;i++)
{
   if((5-arr[i])>=k )
   {
       c++;
   }
  
}

if(c==3)
{
    cout << 1 ;
}
else if(c>3){
    
   cout << c/3 ;
}

else{
    
    cout << 0 ;
}


	return 0;
}
