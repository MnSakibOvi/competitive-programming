#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)

    {
        int n,k;
        cin>>n>>k;
        double res =ceil(n/2.0);
        //cout<<res<<endl;
        if(n%2==0 && (k-1)%2==1 && k<n)
        {

             int sum=0;
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
            {
                sum=sum+1;
                cout<<"1"<<" ";
            }
            cout<<n-sum<<endl;

        }
      else if(n%2==1&& (k-1)%2==0 && k<n)
        {

             int sum=0;
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
            {
                sum=sum+1;
                cout<<"1"<<" ";
            }
            cout<<n-sum<<endl;

        }
       else if(k>res && n!=k)
            cout<<"NO"<<endl;
        else if(n%2==1 && k%2==0)
            cout<<"NO"<<endl;
        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<k; i++)
            {

                cout<<"1"<<" ";
            }
            cout<<endl;

        }
        else if(n%2==0)
        {
            int sum=0;
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
            {
                sum=sum+2;
                cout<<"2"<<" ";
            }
            cout<<n-sum<<endl;

        }
        else if(n%2==1 && k%2==1)
        {
            int sum=0;
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
            {
                sum=sum+1;
                cout<<"1"<<" ";
            }
            cout<<n-sum<<endl;
        }


    }


}
