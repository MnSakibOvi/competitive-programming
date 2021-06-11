
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,i,cnt=0;
    cin>>x;
    for(i=0;x!=0;i++)
    {
        if(x%2!=0)
        {
            x=x-1;
            cnt++;
        }
        x=x/2;
    }
    cout<<cnt;
}
