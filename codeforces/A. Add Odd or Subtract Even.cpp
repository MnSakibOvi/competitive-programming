#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<"0"<<endl;
   else if(a<b)
    {
        if(a%2==0 && b%2==0)
            cout<<"2"<<endl;
        else if(a%2==1 && b%2==1)
            cout<<"2"<<endl;
            else
                cout<<"1"<<endl;

    }
    else
    {
       if(a%2==0 && b%2==0)
            cout<<"1"<<endl;
        else if(a%2==1 && b%2==1)
            cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
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
