

#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n,x;
cin>>n;
vector<int>v1,v2;
for(int i=0;i<n;i++)
{
   cin>>x;
   if(x%2==0)
    v2.push_back(x);
   else
    v1.push_back(x);


}
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
for(int i=0;i<v2.size();i++)
{
    cout<<v2[i]<<" ";
}
cout<<endl;

}
int main()
{
    int t;
   cin>>t;

    while(t--)
    {
    	solve();
    }
}
