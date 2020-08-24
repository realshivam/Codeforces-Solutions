#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int arr[5][5];
    int col;
    int row;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i+1;
                col=j+1;
            }
        }
    }

    if(row>=3)
    {
        row=row-3;
    }
    else if(row<3){

        row=3-row;

    }

    if(col>=3)
    {
        col=col-3;
    }
    else if(col<3){

        col=3-col;

    }

    cout<<row+col;

    return 0;
}
