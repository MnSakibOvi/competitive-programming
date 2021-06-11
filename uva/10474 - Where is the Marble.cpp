
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,q,i=1;

   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
     while(cin>>n>>q )
    {
        if(n==0 && q==0)
            break;
        map<int,int>mp;
        map<int,int>mp2;
        vector<int>v;
        int x,y;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;

                v.push_back(x);
        }
        cout<<"CASE# "<<i<<":"<<endl;
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++)
        {
           if(mp2[v[i]]==0)
           mp2[v[i]]=i+1;
        }
        for(int i=0;i<q;i++)
        {
            cin>>x;
            mp[x]++;
            if(mp2[x]==0)
                cout<<x<<" not found"<<endl;
            else
            {
                cout<<x<<" found at "<<mp2[x]<<endl;


            }
        }

i++;


    }
}



























