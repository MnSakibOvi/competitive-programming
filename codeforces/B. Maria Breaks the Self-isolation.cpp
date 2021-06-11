#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    int cnt=n,cnt2=0;

    for(int i=n-1; i>=0; i--)
    {

        if(v.at(i)<=cnt)
        {
           cnt2=i+1;
           break;
        }
        cnt--;
         //cout<<cnt2<<" ";
    }
    cout<<cnt2+1<<endl;

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


