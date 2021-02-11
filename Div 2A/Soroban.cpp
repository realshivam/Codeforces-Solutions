#include <bits/stdc++.h>
using namespace std;

int main() {
    

 long long int n;
 cin>>n;

 if(n==0)
 {
     std::cout <<"O-|-OOOO" << std::endl;
 }
 const char *number[5]={"-OOOO","O-OOO","OO-OO","OOO-O","OOOO-"};
 while(n>0)
 {
     int rem=n%10;
     if(rem>=5)
     {
         std::cout <<"-O";
          std::cout <<"|";
        std::cout <<number[rem-5] << std::endl;
     }
     
     else{
         std::cout <<"O-";
         std::cout <<"|";
         std::cout <<number[rem] << std::endl;
         
     }
    
     n/=10;
     
     
 }
  return 0;
}
