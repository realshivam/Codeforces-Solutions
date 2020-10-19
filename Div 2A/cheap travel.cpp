

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
    int n;
    int m;
    int a;
    int b;
    int arr[3];
    cin>>n>>m>>a>>b;
 
    int perridecost=a*n;
    
     int optimal;
    
    if(n%m!=0 && n>m)
    {
        
            optimal=min((n/m)*b+(n%m)*a,(n/m)*b+b);
        
        
        
    }
    
    
    else if(n%m!=0 && m>=n){
        
        optimal=b;
    }
    
    
    else{
        
        optimal =(n/m)*b;
        
    }
  
    
    
    cout << min(perridecost, optimal);
   
    

      

    return 0;
}
