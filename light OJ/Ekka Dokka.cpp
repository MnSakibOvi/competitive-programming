


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
        long long int n,flag=0,ii,jj,mn=99999999999999999;
        cin>>n;
        cout<<"Case "<<k<<": ";
        if(n%2==0)
        {


            long long int x=n/2,y=2;
            while(x%2==0)
            {
                x/=2;
                y*=2;
            }
            flag=1;
            cout<<x<<" "<<y<<endl;


        }
        if(flag==0)

            cout<<"Impossible"<<endl;
    }










}




