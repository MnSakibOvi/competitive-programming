

#include<bits/stdc++.h>
using namespace std;




int main()
{


	int n,t=0;

	while(cin>>n &&n!=0)
	{



      int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr ,arr+n);

	for(int i=0;i<n;i++)
	{

			cout<<arr[i];
			if(i!=n-1)
				cout<<" ";
	}
			cout<<endl;




	}
}



