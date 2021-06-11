#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n==1)
        cout<<"I hate it";
    else
    {
        for(i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                cout<<"I hate ";
            }
            else
                cout<<"I love ";
            if(i==n)
                break;

            cout<<"that ";
        }
        cout<<"it";
    }

}
