#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	k=arr[i]+max(sum, k);
    	cout<<k<<" ";
    	sum=max(sum,k);
    }

}
