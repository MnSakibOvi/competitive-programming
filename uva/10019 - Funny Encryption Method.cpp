

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
int decimal(int a)
{
	int cnt=0;
	while(a>0)
	{
		int k=a%2;
		if(k==1)
			cnt++;
		a=a/2;
	}

	return cnt;
}
int hexa(int a)
{
	int cnt=0;
  while(a>0)
  {
  	int g=a%10;
  	a=a/10;
  	if(g==1 || g==2 || g==4 || g==8)
  	cnt++;
  	else if(g==3 || g==5 ||g==6 || g== 9 )
		cnt=cnt+2;
	else if(g==7)
		cnt=cnt+3;
	else
		continue ;


  }
	return cnt;
}

void solve()
{
	int n,k;
	cin>>n;
	cout<<decimal(n)<<" "<<hexa(n)<<endl;




}
int main()
{
	   // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
    	solve();
    }
}


