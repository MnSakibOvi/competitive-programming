
#include<bits/stdc++.h>
using namespace std;

int main()
{
	    int t;
   cin>>t;
 for(int k=1;k<=t;k++)
 {
if(k!=1)
	cout<<endl;


	int n,l;
	cin>>n>>l;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		 cin>>arr[i];
	}
	sort(arr,arr+n);
//	for(int i=0;i<n;i++)
//	{
//		//cout<<arr[i]<<" ";
//	}
int top=n-1,down=0;
int cnt=0;
while(top>=down)
{
	//cout<<top<<" "<<down<<endl;
	if(arr[top]+arr[down]<=l && top!=down)
	{
		cnt++;
		top--;
		down++;
	}
	else if(top==down)
	{
		cnt++;
		top--;
		down++;
	}
	else
	{
		top--;
		cnt++;
	}
}
cout<<cnt<<endl;
 }


}
