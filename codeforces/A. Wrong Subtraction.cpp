#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,r;
    cin>>n>>r;
    for(i=1;i<=r;i++)
    {
        int a=n%10;
        if(a==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n;
}
