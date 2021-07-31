


#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,res=1,flag=0;
    cin>>n;
    int arr[n][5];
    int mx=INT_MAX;
    int ch[5];
    for(int i=0; i<n; i++)
    {
        int cnt=0,cn=0;
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(i==0)
            {
                ch[j]=arr[i][j];

            }
            else
            {
                if(arr[i][j]<ch[j])
                    cn++;
                else if(arr[i][j]>ch[j])
                    cnt++;

            }

        }
       // cout<<cn<<" <->"<<cnt<<endl;
        if(cnt<3 && cn<3 && i!=0)
        {
            flag=1;
        }
        else if(cn>=3)
        {

                res=i+1;
                for(int k=0; k<5; k++)
                {
                    ch[k]=arr[i][k];
                }
        }
    }
//    cout<<"----------->"<<res<<endl;
//    for(int i=0; i<5; i++)
//    {
//        cout<<ch[i]<<" ";
//    }
//    cout<<endl;


for(int i=0;i<n;i++)
{
int   cnt=0;
    for(int j=0;j<5;j++)
    {
        if(i!=(res-1))
        {
          if(arr[i][j]>ch[j])
            cnt++;
        }
    }
  //  cout<<"->"<<cnt<<endl;
    if(cnt<3 && i!=(res-1))
    {
        flag=1;
        break;
    }
}
if(flag==1)
    cout<<"-1"<<endl;
else
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
// t=1;
    while(t--)
    {
        solve();
    }
}
