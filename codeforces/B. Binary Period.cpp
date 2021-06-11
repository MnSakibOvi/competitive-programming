#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str,str2;
    cin>>str;
    int z0=0,o1=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
            o1++;
        else
            z0++;
    }
    // cout<<"->";
    if(z0==str.size() || o1==str.size())
        cout<<str<<endl;
    else
    {

        int n=str.size();

        while(n--)
            cout<<"10";

        cout<<endl;
    }





}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}

