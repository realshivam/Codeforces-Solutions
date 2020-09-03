


    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        
        for(int j=1;j<=n;j++)
        {
            auto it = find(v.begin(), v.end(), j); 

            cout<<distance(v.begin(),it)+1<<" ";
        }
     
        return 0;
    }
