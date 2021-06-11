

#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;

int arrrayy[n],mn=INT_MAX;
map<int,int>mp;
for(int i=0;i<n;i++)
{


    cin>>arrrayy[i];
    mn=min(mn,arrrayy[i]);
    mp[arrrayy[i]]++;
}
if(mp.size()==1)
    cout<<"0"<<endl;
else
    cout<<n-mp[mn]<<endl;


}
int main()
{
    int t;
   cin>>t;
  // t=1;
    while(t--)
    {
    	solve();
    }
}
