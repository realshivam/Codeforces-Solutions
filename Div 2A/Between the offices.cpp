#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int francisco=0;
    int seatle=0;
    for(int i=0; i<n ;i++)
    {
        if(s[i]=='S')
        {
            if(s[i+1]=='F')
            {
                seatle++;
            }
        }
        
        else if(s[i]=='F')
        {
            if(s[i+1]=='S')
            {
                francisco++;
            }
        }
    }
    
    if(seatle>francisco)
    {
        cout<<"YES";
    }
    
    else{
        
        cout<<"NO";
    }
    return 0;
}
