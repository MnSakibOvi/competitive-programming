#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
    for(int i=1; n!=0; i++)
    {
        int a=n%10;

        if(a==4  || a==7)
        {
            c++;
        }
        n=n/10;

    }

    if(c==4 || c==7)
        cout<<"YES";
    else
        cout<<"NO";
}
