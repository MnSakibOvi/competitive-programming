

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
	int n,dh1=2,dh2=0,cnt=0,clone=0;
	cin>>n;
   while(n>1)
   {

   	dh2=dh2+dh1;
   	//cout<<"dh1 = "<<dh1<<"   dh2 = "<<dh2<<" n ="<<n;
   	dh1=dh1+3;
   if(dh2==n)
   {
   	cnt++;
   	break;
   }
   if(dh2>n)
   {
   	cnt++;
   	n=n-clone;
   	dh1=2;
   	dh2=0;
   }
   clone=dh2;

   //cout<<"  cnt=  "<<cnt<<endl;
   }
   cout<<cnt<<endl;


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
