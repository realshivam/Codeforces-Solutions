#include <iostream>
using namespace std;

int main() {
	
	int n,x;
	cin>>n>>x;
	int count=0;
	int first=1;
	for(int i=0;i<n;i++)
	{
	    
	    int start,end;
	    cin>>start>>end;
	    count+=(start-first)%x + (end-start) +1;
	    first=end+1;
	   
	   
	   
	}
	std::cout << count << std::endl;
	
	
	return 0;
}
