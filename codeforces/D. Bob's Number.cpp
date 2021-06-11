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
  long long int n;
    cin>>n;
    string str;
    cin>>str;
    if(str[n-1]=='1')
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;



}

