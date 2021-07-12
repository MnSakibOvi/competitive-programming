
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       if(n%2020==0)
       cout<<"YES"<<endl;
       else
       {
           int g=n%2020;
           int f=n/2020;
           if(g>f)
            cout<<"NO"<<endl;
           else
            cout<<"YES"<<endl;
       }
    }

}
