
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t,cnt=0;
    cin>>t;
    while( t--)
    {
    	cnt++;
    	int n,low=0,high=0;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
       {
       	cin>>arr[i];
       }
       for(int i=0;i<(n-1);i++)
	 {
	 	if(arr[i]<arr[i+1])
			high++;
		if(arr[i]>arr[i+1])
			low++;
	 }
	 cout<<"Case "<<cnt<<": "<<high<<" "<<low<<endl;

    }



}
