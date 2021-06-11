
#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,k;
   cin>>n>>k;
   int arr[n],g=n-k;
   for(int i=0;i<n;i++)
	cin>>arr[i];
	  for(int h=k;h<n;h++)
		cout<<arr[h]<<" ";

   for(int j=0;j<k;j++)
	cout<<arr[j]<<" ";
	cout<<endl;


}
