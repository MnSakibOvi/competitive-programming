#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
  for(int k=1;k<=t;k++)
    {
        int n,mn=INT_MAX;
        cin>>n;
        ull arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        ull lcm=arr[0];
        for(int j=1;j<n;j++)
        {
            ull gcd=__gcd(lcm,arr[j]);
              lcm=(lcm*arr[j])/gcd;
        }
       // cout<<lcm<<endl;
        ull numerator=n*lcm;
        ull denominator=0;
        for(int i=0;i<n;i++)
        {
          ull h=lcm/arr[i];
            denominator+=h;
        }
        ull h=__gcd(denominator,numerator);
        cout<<"Case "<<k<<": "<<numerator/h<<"/"<<denominator/h<<endl;;
    }
}

