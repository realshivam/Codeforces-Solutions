#include <bits/stdc++.h>

using namespace std;


int main() {
    
  int n;
  int k;
  cin>>n>>k;
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(i==j)
          {
              std::cout << k << " ";
          }
          else{
              cout<<0<<" ";
          }
      }
      cout<<endl;
  }
  return 0;
}
