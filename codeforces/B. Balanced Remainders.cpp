
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,c0=0,c1=0,c2=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%3==0)
            c0++;
        else if(arr[i]%3==1)
            c1++;
        else if(arr[i]%3==2)
            c2++;
    }
    //  cout<<"---->c0="<<c0<<" c1= "<<c1<<" c2= "<<c2<<endl;
    int cnt=0,cnt1=0,cnt2=0,mn=0;

    int a=(c0+c1+c2)/3;
    while(c0!=c1 || c1!=c2 )
    {
        if(c0>a)
        {
            cnt+=c0-a;
            c1+=c0-a;
            c0=a;
        }
        if(c1>a)
        {
            cnt+=c1-a;
            c2+=c1-a;
            c1=a;
        }
        if(c2>a)
        {
            cnt+=c2-a;
            c0+=c2-a;
            c2=a;
        }
    }
    //cout<<"---->c0="<<c0<<" c1= "<<c1<<" c2= "<<c2<<endl;




cout<<cnt<<endl;


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

