 
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    int akshat=0;
    int malvika=0;
    cin>>n>>m;
    int count=0;
    while(1)
    {

       if(count%2==0)
        {
           if(n*m>=1)
            {
                n--;
                m--;
                count++;
                
            }
            else{
                cout<<"Malvika";
                break;
            }
        }
        else{

            if(n*m>=1)
            {
                n--;
                m--;
                count++;
               
            }
            else{
                cout<<"Akshat";
                break;
            }
        }

    }

   
    

    

    return 0;
}
