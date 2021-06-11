
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int m=(n)+1;
    int g=n,mid=0,cn=1;

    for(int i=1; i<=n+1; i++)
    {
        int flag=0;
        int cnt=0;
        int mn=0;
        for(int j=1; j<=m; j++)
        {


            if(j>g  )
            {
                cout<<mn<<" ";
                if(mn==mid)
                {
                    flag=1;
                }
                if(flag==1)
                    mn--;
                else
                    mn++;
            }
            else
            {
                cout<<"  ";
            }


        }
        cout<<endl;
        g--;
        mid++;
        m++;
    }
}
int main()
{
    int t;
    //  cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}

