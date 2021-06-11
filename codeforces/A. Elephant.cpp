#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o;
    cin>>n;
    m=n/5;
    if(n%5==0)
    {
        cout<<m;
    }
    else
    {
        m=m+1;
        cout<<m;
    }

}
