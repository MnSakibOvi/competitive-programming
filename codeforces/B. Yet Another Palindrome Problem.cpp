#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,flag=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int k=0;k<n;k++)
	{
		for(int l=k+2;l<n;l++)
		{
			if(arr[k]==arr[l])
			{
				flag=1;
				cout<<"YES"<<endl;
				break;
			}

		}
		if(flag==1)
				break;
	}
	if(flag==0)
	{
		cout<<"NO"<<endl;
	}

    }
}

