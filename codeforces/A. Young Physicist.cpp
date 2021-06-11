#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,f=0;
    cin>>n;
    int arr[n][3];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<n; i++)
        {

            sum=sum+arr[i][j];

        }
        if(sum!=0)
        {
            f=1;
            break;
        }
    }

    if(f==0)
        cout<<"YES";
    else

        cout<<"NO";
}
