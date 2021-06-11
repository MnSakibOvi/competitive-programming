
#include<bits/stdc++.h>
using namespace std;

void  solve()
{

    int d,n,sum=0,I=0,cnt=0,sum2=INT_MIN;
    cin>>d>>n;
    d=d*2;
    int arrx[n],arry[n],arrp[n];
    for(int i=0;i<n;i++)
        cin>>arrx[i]>>arry[i]>>arrp[i];

    for(int i=0;i<n-1;i++)
    {
        if(cnt==0)
            int d=arrp[i];
        else
            d=0;
        if(abs(arrx[i]-arrx[i+1])<=d && abs(arry[i]-arry[i+1])<=d)
        {


            sum=sum+arrp[i+1]+d;
            cnt++;
        }
         sum2=max(sum,sum2);

        if(abs(arrx[i]-arrx[i+1])>d && abs(arry[i]-arry[i+1])>d)
            {
                cnt=0;
                sum=0;
            }
            //sum2=max(sum,sum2);
            cout<<sum<<endl;

    }
  //  cout<<sum2<<endl;



}


int main()
{

int t;
cin>>t;
while(t--)

        solve();


}

