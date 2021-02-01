#include <bits/stdc++.h>

using namespace std;


int main() {
    
   int k;
   cin>>k;
   int arr[10]={0};
   int t=4;
   bool s=false;
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           char c;
           cin>>c;
           if(c!='.')
           {
           arr[c-'0'-1]+=1;
           if(arr[c-'0'-1]>2*k)
           {
               std::cout << "NO" << std::endl;
                s=true;
                break;
           }
           }
       }
       if(s)
       {
           break;
       }
   }
   

   if(!s)
   {
       std::cout << "YES" << std::endl;
   }
   
	return 0;
}
