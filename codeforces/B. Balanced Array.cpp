#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        int t;
        cin>>t;
        if(t%4!=0)
            cout<<"NO"<<endl;
        else
        {
            int sum=0,sum2=0;
            cout<<"YES"<<endl;

            for( i=2; i<=t; i=i+2)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            for( i=1; i<=t-3; i=i+2)
            {
                sum2=sum2+i;
                cout<<i<<" ";
            }
            cout<<sum-sum2<<endl;
        }

    }


}
