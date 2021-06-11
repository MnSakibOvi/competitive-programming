#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,b,w,cntb=0,cntw=0;
    cin>>n>>m;
    int s=n*m;
    if(s%2==0)
    {
        b=(s/2)+1;
        w=(s/2)-1;

    }
    else
    {
        w=s/2;
        b=s/2+1;
    }
    string str[2];
    str[0]='W';
    str[1]='B';
  //  cout<<w<<b<<endl;
    for(int i=1; i<=n; i++)
    {
        if(cntw>=w)
            str[0]='B';

        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
            {
                if(cntw>=w)
                    str[0]='B';
                if(j%2==1)
                {
                    cout<<str[1];
                    cntb++;
                }
                else
                {
                    cout<<str[0];
                    cntw++;
                }

            }
        }
        else
        {
            for(int j=1; j<=m; j++)
            {
                if(cntw>=w)
                    str[0]='B';
                if(j%2==1)
                {
                    cout<<str[0];
                    cntw++;
                }
                else
                {
                    cout<<str[1];
                    cntb++;
                }

            }
        }
        cout<<endl;
    }
//for(int j=1;j<=m;j++)
//{
//
//}
// cout<<"B ="<<b-cntb<<"w ="<<w-cntw<<endl;



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

