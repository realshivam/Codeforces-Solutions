#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int n;
	int m;
	cin>>n>>m;
    vector<int>arr;
	for(int i=0;i<m;i++)
	{
	    int x;
	    cin>>x;
	    arr.push_back(x);
	}
	
	sort(arr.begin(),arr.end());
	
	int low=0;
	int high=n-1;
	int mini=INT_MAX;
	while(high<m)
	{
	   mini=min(arr[high]-arr[low],mini);
	   low++;
	   high++;
	}
	
	std::cout << mini << std::endl;
	return 0;
}
