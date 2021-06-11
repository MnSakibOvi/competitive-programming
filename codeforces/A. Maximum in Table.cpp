
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n]= {1};
    for(int j=0; j<n; j++)
    {

        for(int i=1; i<n; i++)
        {
            arr[i]=arr[i]+arr[i-1];
        }
    }
    cout<<arr[n-1];
}
