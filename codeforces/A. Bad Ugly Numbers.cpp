
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sum=0;
    cin>>n;
    if(n==1)
        cout<<"-1"<<endl;
    else
    {

        for(int i=1; i<=n; i++)
        {
            if(i==1)
                cout<<"2";
            else
            cout<<"3";
        }

          cout<<endl; // cout<<"3"<<endl;

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
