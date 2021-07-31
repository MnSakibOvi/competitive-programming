

#include<bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long arr[21],sum=0,gun=1;
    arr[0]=1;
    for(int i=1;i<=20;i++)
    {
        gun=gun*i;

        arr[i]=gun;
       //cout<<arr[i-1]<<endl;
    }


    int t;
  cin>>t;
// t=1;
  for(int cas=1;cas<=t;cas++)
    {
        vector<int>v;

        unsigned long long n;
        cin>>n;

        cout<<"Case "<<cas<<": ";
        for(int i=20;i>=0;i--)
        {
            if(arr[i]<=n)
            {
                n-=arr[i];
               // cout<<arr[i]<<"--"<<n<<"//";
                v.push_back(i);
            }


        }
        if(n==0)
        {
            for(int i=v.size()-1;i>=0;i--)
            {
              if(i<v.size()-1)
                cout<<"+";
                cout<<v[i]<<"!";
            }
            cout<<endl;
        }
        else
            cout<<"impossible"<<endl;

    }
}



