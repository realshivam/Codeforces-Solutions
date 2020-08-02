    #include <iostream>
    #include <string>
     
    using namespace std;
     
    int main()
    {
        
        string s;
        string h;
        
        
        cin>>s;
        
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
            {
                continue;
            }
            
            else
            {
                h+='.';
    		    h+=towlower(s[i]);
            }
        
        }
        
        cout<<h<<endl;
        
        return 0;
    }
     
