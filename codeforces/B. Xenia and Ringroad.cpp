
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int m,n,sum=0,gap;
cin>>n>>m;
int arr[m];
for(int i=0;i<m;i++)
{
    cin>>arr[i];
}
sum+=arr[0]-1;
// cout<<sum<<endl;
for(int i=1;i<m;i++)
{
    if(arr[i]>=arr[i-1])
        sum+=(arr[i]-arr[i-1]);
    else
    {
        gap=n-arr[i-1];
        sum+=gap+arr[i];
    }
    //cout<<sum<<endl;

}
cout<<sum<<endl;

}


