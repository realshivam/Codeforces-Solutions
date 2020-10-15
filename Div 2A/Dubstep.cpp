

#include <bits/stdc++.h>

using namespace std;

int main()
{
   string str;
   cin>>str;
    int n=str.size();
   for(int i=0;i<n;i++)
   {
       if(str[i]=='W')
       {
           if(str[i+1]=='U' && str[i+2]=='B')
           {
               str.erase(i, 3);
               n=str.size();
               if(i!=0)
               {

                   str.insert(i," ");

               }
               
               i--;
               
           }
       }
   }

   cout<<str;
    

    return 0;
}
