


#include<bits/stdc++.h>
#define fastIO          ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

int main()
{
fastIO;
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    map<int,int>mp2;
    vector<int>v;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
        if(mp[x]==1)
        {
            mp2[x]=i+1;
            v.push_back(x);
        }

    }
    int xx;
    while(k--)
    {
        cin>>xx;
        cout<<mp2[xx]<<" ";
        int cl=mp2[xx];

        for(int j=0; j<v.size(); j++)
        {
            int g=v[j];
            if(mp2[g]<cl)
                mp2[g]++;




        }
        mp2[xx]=1;

    }
    cout<<endl;



}
