
#include<bits/stdc++.h>
using namespace std;

void solve()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    if(i==0)
    {
        scanf("%d",&arr[i]);
    }
    else
        scanf(",%d",&arr[i]);
}
//for(int i=0;i<n;i++)
//{
// cout<<arr[i];
//}
//cout<<endl;
for(int i=0;i<n;i++)
{
    long long int  h=arr[i],sum=1;
    if(h>=19 || h==1)
    {


        cout<<"No"<<endl;
        continue;
    }


 long long int  ss=pow(2,h-1);
 long long int  z=pow(2,h)-1;
  long long int m= ss*z;

  for(long long int j=2;j*j<=m;j++)
  {

     if(m%j==0)
     {
         sum=sum+j;
    //     cout<<sum<<" ";
         sum=sum+(m/j);





       //  cout<<sum<<endl;

     }



  }
 // cout<<arr[i]<<"->";
  //cout<<sum<<" "<<m<<endl;
   if(sum==m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;


}



}
int main()
{
//freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}


