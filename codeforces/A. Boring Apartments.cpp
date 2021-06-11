#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    int r=(n%10)-1;
    int h=r*10;
   // cout<<h<<endl;
    stringstream ss;
    ss<<n;
    string str;
    ss>>str;
    int e=str.size();
    if(e==1)
        h=h+1;
    if(e==2)
        h=h+3;
    if(e==3)
        h=h+6;
    if(e==4)
        h=h+10;

        cout<<h<<endl;



}

