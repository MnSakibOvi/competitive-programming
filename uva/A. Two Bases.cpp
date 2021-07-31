#include<bits/stdc++.h>
using namespace std;
long long int change(int *arr ,int a,int n)
{
    long long int sum=0;
   long long int m=1;
    for(int i=n-1;i>=0;i--)
    {
      long long  int g=arr[i];
     // cout<<g<<" ->";
        g=g*m;
       //  cout<<g<<endl;
        sum+=g;
       m=a*m;

//cout<<sum<<endl;
    }
    return sum;
}
void solve()
{

 int n,k,m,l;

 cin>>n>>k;
int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];

 }
 cin>>m>>l;
 int arr2[m];
 for(int i=0;i<m;i++)
 {
   cin>>arr2[i];

 }
//cout<<arr<<" "<<arr2<<endl;

  long long int x=change(arr,k,n);
   long long int y=change(arr2,l,m);
  // cout<<x<<" "<<y<<endl;
 if(x==y)
    cout<<"="<<endl;
 else if(x>y)
    cout<<">"<<endl;
 else
    cout<<"<"<<endl;


}
int main()
{
    int t;
    //cin>>t;
t=1;
    while(t--)
    {
        solve();
    }
}
