

#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long int n,res=0,res2=0,res3=0,r=999999999999999999;
    cin>>n;

    if(n<=6)
        cout<<"15"<<endl;
    else if(n<=8)
        cout<<"20"<<endl;
    else if(n<=10)
        cout<<"25"<<endl;
    else
    {
          res=ceil(n*2.5);

//cout<<res<<endl;
    if(res%5!=0)
       res+=5-(res%5);

cout<<res<<endl;





    }




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
