#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(arr[k]==j)
            {
                cout<<k+1<<" ";
                break;
            }
        }
    }

    return 0;
}