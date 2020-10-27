#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	pair<int, int>arr[n] ;
	int flag=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i].first>>arr[i].second;
	}
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
	   if(arr[i].first<arr[i+1].first && arr[i].second>arr[i+1].second)
	   {
	       flag=1;
	       break;
	   }
	}
	if(flag==0)
	{
	     cout << "Poor Alex";
	}
	else{
	     cout << "Happy Alex";
	}
	return 0;
}
