#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Min,i,res,sum=0,s;
    cin>>n>>Min;
    s=240-Min;
    for(i=1; i<=n; i++)
    {
        res=i*5;
        sum=sum+res;
        if(sum>s)
        {
            i=i-1;
            cout<<i;
            break;
        }
        else if(sum==s)
        {
            cout<<i;
            break;
        }
    }
    if((i-1)==n)
    {
        cout<<i-1;

    }



}
