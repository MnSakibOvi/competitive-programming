#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,x,y,white=0,cnt1=0,sum=0;
    cin>>n>>m>>x>>y;
    char arr[n+1][m+1];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='.')
            {
                white++;

            }
        }



    }
//cout<<white<<endl;
    if(x*2<=y)
        cout<<x*white<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(arr[i][j]=='.' && arr[i][j+1]=='.'  && j<m)
                {
                    sum=sum+y;
                    j++;;
                }
                else if(arr[i][j]== '.')
                    sum=sum+x;
            }
        }
        cout<<sum<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
}

