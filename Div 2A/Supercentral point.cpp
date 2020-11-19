#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[i]=make_pair(x,y); 
    }
   int count=0;
    for(int i=0;i<n;i++)
    {
        
       int l=0,r=0,u=0,d=0;
       int x=arr[i].first;
       int y=arr[i].second;
        for(int j=0;j<n;j++)
        {
            if(arr[j].first>x && arr[j].second==y)
            {
                r++;
            }
            if(arr[j].first<x && arr[j].second==y)
            {
                l++;
            }
            if(arr[j].first==x && arr[j].second<y)
            {
                d++;
            }
            if(arr[j].first==x && arr[j].second>y)
            {
                u++;
            }
        
        }
        
            if(r>0 && l>0 && d>0 && u>0)
            {
                count++;
            }
    }
    
    std::cout << count<< std::endl;

	return 0;
}
