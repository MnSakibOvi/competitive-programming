#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        int s=n/10;
        int k=n%10;
        int l=n/100;
        int m=(l*10)+k;
        cout<<max(s,m);
    }
}
