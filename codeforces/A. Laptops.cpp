
#include<bits/stdc++.h>
using namespace std;
int flag=0,p;
int  solve()
{
    int n;
    cin>>n;
    int arrp[n],arrq[n];
    for(int i=0;i<n;i++)
    {
        cin>>arrp[i]>>arrq[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arrp[i]!=arrq[i])
        {
            flag=1;
            break;
        }
    }

    return flag;

}


int main()
{


        solve();

if(flag==1)
    cout<<"Happy Alex"<<endl;
else
    cout<<"Poor Alex"<<endl;

}
