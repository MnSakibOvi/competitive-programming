#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,n,b,i,cnt=0;
        cin>>a>>n>>b;
        char j='a';
        for( i=1;i<=a;i++,j++)
        {
            cout<<j;
            cnt++;
            if(cnt==b || cnt==26)
            {
                j='a';
                j--;
                cnt=0;
            }

        }
        cout<<endl;
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
