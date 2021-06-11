#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k=0,l=0;
    	cin>>n;


    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
   	}
   	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]>arr[i-1])
		{
			k=i;
			break;
		}
	}
	//cout<< " k= "<<k<<"arr[k]== "<<arr[k]<<endl;
	for(int i=k-1;i>=0;i--)
	{
		if(arr[i]<arr[i-1])
		{
			l=i;
			break;
		}
	}
	cout<<l<<endl;

    }
}

