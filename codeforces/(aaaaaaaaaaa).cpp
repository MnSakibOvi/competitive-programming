
#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n,k,x;
cin>>n>>k;
int arr[n];
vector<int>v;
map<int,int>mp;
for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       x=arr[i];
       mp[x]++;
       if(mp[x]<=k)
       {
           v.push_back(mp[x]);
       }
       else
        v.push_back(0);

   }
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
   cout<<endl;


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



