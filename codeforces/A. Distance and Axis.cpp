#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    { int n,k;
    cin>>n>>k;

       if(k>n)
        cout<<k-n<<endl;
       else
       {
           int r=n-k;

           if(r%2==0)
            cout<<"0"<<endl;
            else
            cout<<"1"<<endl;
       }

    }
}

