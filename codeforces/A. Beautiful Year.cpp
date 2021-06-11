#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;

    n=n+1;

    for(i=1; i<=10000; i++)
    {
        int s=n%10;
        int k=(n/10)%10;
        int l=(n/100)%10;
        int g=(n/1000);
        if(s == k || s ==l || k == l || g == l || g == k || g == s)
            n++;
        else
        {

            cout<<n;
            break;
        }

    }

}
