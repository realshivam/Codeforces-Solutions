#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int t;
	cin>>n>>t;
	string str;
	cin>>str;
	while(t--)
	{
	for(int i=0;i<n-1;)
	{
	    if(str[i]=='B' && str[i+1]=='G')
	    {
	        str[i]='G';
	        str[i+1]='B';
	        i+=2;
	    }
	    else{
	        i++;
	    }
	}
	}
	cout << str << endl;
	return 0;
}
