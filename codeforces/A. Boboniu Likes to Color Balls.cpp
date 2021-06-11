

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
 int r,g,b,w;
 cin>>r>>g>>b>>w;
 int cnt1=0,cnt2=0,cnt0=0;
 int arr[3];
 arr[0]=r;
 arr[2]=b;
 arr[1]=g;

 for(int i=0;i<3;i++)
 {



	 if(arr[i]==0)
	cnt0++;
 else if(arr[i]%2==0)
	cnt2++;
 else
	cnt1++;
 }
 if(cnt0>0)
 {
 	if(w%2==1)
		cnt1++;
 	if(cnt1>1)
		cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;

 }
 else if(w%2==0 || w==0)
 {
 	if(cnt1==0)
		cout<<"Yes"<<endl;
	else if(cnt1==1)
		cout<<"Yes"<<endl;
	else if(cnt1==3)
	cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

 }
 else if(w%2==1)
 {
 	if(cnt2==0)
 	cout<<"Yes"<<endl;
 	else if(cnt2==1)
		cout<<"Yes"<<endl;
	else if(cnt2==3)
	cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
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
////////////////////////tasin/////////////////
///////////////////////////////////////////
////////
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int c1=0,c2=0,c3=0;
    (a==0 || b ==0 || c == 0)?c3=1:c3=0;
    vector<int> v;
    (a&1)?v.push_back(1):v.push_back(0);turnary
    (b&1)?v.push_back(1):v.push_back(0);
    (c&1)?v.push_back(1):v.push_back(0);
    (d&1)?v.push_back(1):v.push_back(0);
    for(int i : v)range based loop
       (i&1)?c2++:c1++;turnary
    (c1==c2 || c3==1 && c2>1)?cout<<"No"<<endl:cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
