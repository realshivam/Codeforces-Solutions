#include<bits/stdc++.h>
using  namespace std;
int main()
{

int n;
int m;

cin>>n>>m;

int c=0;
int k=1;

for(int i=0;i<n;i++)
{
    
        if(c%2==0)
        {
             for(int j=0;j<m;j++)
             {
                 std::cout << "#";
             }
             cout<<endl;
             c++;
        }
        else if(c%2!=0 && k%2!=0)
            
             {   
                  for(int j=0;j<m-1;j++)
                  {
                     cout << ".";
                  }
                 cout << "#" ;
                 c++;
                 k++;
                 cout<<endl;
            }
            
        else if(c%2!=0 && k%2==0)
            {
                  cout << "#" ;
                  for(int j=0;j<m-1;j++)
                  {

                     cout << ".";
                  }
                 c++;
                 k++;
                 cout<<endl;
            }
 
}




	return 0;
}
