
#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,l;
cin>>n>>l;

 double arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
 double g=l-arr[n-1];
 double mx=max(arr[0],g);
for(int i=0;i<n-1;i++)
{
  g=arr[i+1]-arr[i];
  g=g/2;
  //cout<<"->"<<g<<endl;
  mx=max(mx,g);
}
printf("%.9lf\n",mx);

}


