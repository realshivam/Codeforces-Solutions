#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    string s;
    cin>>s;

    while(m--)
    {
        int l;
        cin>>l;
        int r;
        cin>>r;
        char c1;
        cin>>c1;
        char c2;
        cin>>c2;

        for(int i=l-1;i<=r-1;i++)
        {
            if(s[i]==c1)
            {
                s[i]=c2;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}