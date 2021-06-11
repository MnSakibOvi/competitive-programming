/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k=9;
	cin>>n;
	if(n<=2)
	{
		while(n--)
	{
		cout<<k;
		k--;
		if(k==-1)
			k=9;
	}
	cout<<endl;
	}
	else if (n==3)
	{
		cout<<"989"<<endl;


	}
	else
	{
		cout<<"989";
		n=n-3;
		k=0;
		while(n--)
	{
		cout<<k;
		k++;
		if(k==10)
			k=0;
	}
	cout<<endl;
	}








}
int main()
{
    int t;
    cin>>t;
   // t=1;
    while(t--)
    {
    	solve();
    }
}





