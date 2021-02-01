#include <bits/stdc++.h>

using namespace std;


int main() {
    
   int n;
   cin>>n;
   multiset<int>s;
   set<int>distinct ;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       s.insert(x);
       distinct.insert(x);
   }
   
   int total=s.size();
   
   if(total==1)
   {
       std::cout << "YES" << std::endl;
   }
   else{
       bool f=true;
       for(auto i=distinct.begin();i!=distinct.end();i++)
       {
           int number=(*i);
           int c=s.count(number);
           if(c>(n+1)/2)
           {
               std::cout << "NO" << std::endl;
               f=false;
               break;
           }
          
       }
       
       if(f)
       {
            std::cout << "YES" << std::endl;
       }
       
   }
   
	return 0;
}
