#include <bits/stdc++.h>
using namespace std;


unsigned long long int cube(unsigned long long int m,unsigned  long long int n)
{

    for (long long int i=m; i> 0; i--) {

		unsigned long long int s=n-(i*i*i);


        if (cbrt(s)   == (int) cbrt(s))
            return 1;
    }
    return 0;
}
void solve()
{
	unsigned  long long int n;
	cin>>n;
	unsigned long long int m =cbrt(n);
	//cout<<m<<"->";
	if(n==1)
		cout<<"NO"<<endl;
	else if(cube(m,n)==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


}
int main()
{
   int t;
   cin>>t;
   while(t--)
	solve();
}
