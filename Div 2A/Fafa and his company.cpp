#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
   
    int c=0;
    
    
    for(int i=1 ; i<n ;i++)
    {

        if((n-i)%i==0)
        {
            c++;
        }
    }

    cout<<c;

    return 0;
}
