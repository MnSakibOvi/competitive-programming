#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,c=0,j,d=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<(n-1); i++)
    {
        if(arr[i+1]>=arr[i])
            c++;
        else
        {
            c=0;

            continue;
        }
        if(c>d)
            d=c;
        if(arr[i+1]==0)
            break;

    }
    cout<<d+1;

}
