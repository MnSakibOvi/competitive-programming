


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
	vector<int>v;
	long long int n;
	cin>>n;

	int a,m=0;
	while(n!=0)
  {
     a=n%10;
     n=n/10;
     v.push_back(a);


  }
  int h=0;
 reverse(v.begin(), v.end());
 if(v[0]==9)
 {
 	cout<<9;
 	h=1;
 }


 for(int  i=h;i<v.size();i++)
 {

 	m=9-v[i];
 	cout<<min(m,v[i]);
 }
 cout<<endl;
}
int main()
{
    int t;

t=1;
    while(t--)
    {
    	solve();
    }
}




