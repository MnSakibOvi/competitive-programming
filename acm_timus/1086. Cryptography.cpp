

#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int check(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void solve()
{

int n;
cin>>n;
cout<<v[n-1]<<endl;



}
int main()
{

v.push_back(2);
int   g=1;
    for(int i=3;g<=  15001;i++)
    {
        if(check(i)==1)
        {
          v.push_back(i);
            g++;
        }
    }
    int t;
   cin>>t;
 //  t=1;
    while(t--)
    {
    	solve();
    }
}
printf("the sum is =",a);

