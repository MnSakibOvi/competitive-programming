
#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n;
cin>>n;
int g=n/3;
int h=n/3;
if(n%3==2)
    h++;
if(n%3==1)
    g++;

    cout<<g<<" "<<h<<endl;


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



