
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long  int n,cl=0, mx=INT_MIN,x;
    cin>>n;
   vector<long long int>v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
       v.push_back(x);




    }
   for(int i=0;i<v.size();i++)
   {
       if(i<n-1)
       {
            long long int res=v[i]*v[i+1];
           mx=max(mx,res);
       }
   }
   cout<<mx<<endl;
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
