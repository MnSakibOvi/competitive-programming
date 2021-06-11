

/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long int n,m,k,flag=0,cnt=0;
	cin>>m>>k;
	long long int mx;
	long long int mn;
	if(m>k)
	{
		mx=m;
		mn=k;
	}
	else
	{
		mx=k;
		mn=m;
	}
//	 if(b>a)
//        swap(a,b);
	n=mx;
	while(n>=mn)
	{

		if(n==mn)
			break;
		cnt++;
		if(n%8==0 && n/8>=mn)
			n=n/8;
		else if(n%4==0 && n/4>=mn)
			n=n/4;
		else if(n%2==0 && n/2>=mn)
			n=n/2;

			else
			{
			flag=1;
			break;
			}






	}
	if(flag==0)
	cout<<cnt<<endl;
	else
	{
		cout<<"-1"<<endl;
	}




}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
    	solve();
    }
}


