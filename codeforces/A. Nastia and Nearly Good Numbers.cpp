

#include<bits/stdc++.h>
using namespace std;
void solve()
{
unsigned long long int a,b;
cin>>a>>b;


   unsigned long long int x,y,z;
    x=a*b;
    y=a;
    z=x+y;
  if(x==y || x==z || y==z )
    cout<<"NO"<<endl;
  else
  {

    cout<<"YES"<<endl;
    cout << x << " " << y << " " << z  << endl;
  }


}
int main()
{
    int t;
    cin>>t;
 //  t=1;
    while(t--)
    {
    	solve();
    }
}


