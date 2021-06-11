#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


long long int n;cin>>n;
   long long int ar[n];
   for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar,ar+n);
  long long int x=0;
   for(int i=0,j=n;i<n;i++,j--)
   {
       x+=ar[i]*j;
   }
   cout<<x<<endl;
    }
}
