#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin>>m>>n;
        if(m==1)
            cout<<"0"<<endl;
          else if(m==2)
                cout<<n<<endl;
           else
           {
             int s=n*2;
            cout<<s<<endl;
           }


    }
}
