#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m;

    if(n>m)
    {
        a=n-m;
        cout<<m<<" "<<a/2;
    }
    else
    {
        a=m-n;
        cout<<n<<" "<<a/2;

    }


}
