

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,m,cnt=0;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0;

    }
    else if(m<=n)
    {
        cout<<n-m;
    }
    else
    {
        while(m>=n-1)

        {
            if(m%2==0)
            {
                m=m/2;
                //cnt++;
            }
            else
            {
                m=(m+1)/2;
               cnt++;
            }
            cnt++;
        }
        cout<<cnt;
    }
}
