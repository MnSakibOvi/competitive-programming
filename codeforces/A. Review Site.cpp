#include<bits/stdc++.h>

using namespace std;
void solve()
{
       int n;
  cin>>n;
  int arr[n];
  int flag=0,cnt=0;
  for(int i=0;i<n;i++)
   {

    cin>>arr[i];
    if(arr[i]==1 || arr[i]==3)
        cnt++;
   }

            cout<<cnt<<endl;

}
int main()
{

    int t;
  cin>>t;
  while(t--)
    solve();



}
