    #include <iostream>
     
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        while(n--)
        {
            string s;
            cin>>s;
            int y = s.size();
            if(y>10)
            {
                cout<<s[0]<<(y-2)<<s[y-1]<<"\n";
            }
            else
            {
                cout<<s<<"\n";
            }
            
        }
     
        return 0;
    }

