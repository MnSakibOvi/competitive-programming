

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
    int n,k,mn=INT_MAX,fl=0,mi=0,cnt0=0,cnt1=0;
    cin>>n;
    int m[n];
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin>>m[i];
        if(m[i]<mn)
        {
            mn=m[i];
            mi=i;
        }
        if(m[i]<m[i-1] && i!=0)
            fl=1;
    }
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        if(p[i]==0)
		cnt0++;
	  else
		cnt1++;
    }
    if(fl==0)
        cout<<"Yes"<<endl;
    else
    {
    	if(cnt0==0 || cnt1==0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
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
