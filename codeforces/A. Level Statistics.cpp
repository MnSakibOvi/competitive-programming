

// *********************************************** T
// O *                                           * A
// O *    Solved By : mn_sakib_ovi(DIU)          * S
// v *      Be Positive,be Happy.                * I
// I *                                           * N
// *********************************************** N
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 	int n,sump=0,sumc=0,flag=0;cin>>n;
 	int arrp[n],arrc[n];
 	for(int i=0;i<n;i++)
	{
		cin>>arrp[i]>>arrc[i];
	}

	sump=arrp[0];
	sumc=arrc[0];
	if(n==1 && sump<sumc)
		{
			flag=1;

		}
		if(arrp[0]<arrc[0])
			flag=1;

	for(int i=1;i<n;i++)
	{
		if(arrp[i]<arrp[i-1] || arrc[i]<arrc[i-1])
		{
			flag=1;
			break;
		}
		sump=sump+arrp[i];
		sumc=sumc+arrc[i];
		if(sump<sumc)
		{
			flag=1;
			break;
		}
		if(arrp[i-1]==arrp[i] && arrc[i-1]!=arrc[i])
		{
			flag=1;
			break;
		}
		if(abs(arrp[i-1]-arrp[i])<abs(arrc[i-1]-arrc[i]))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;


 }
}
