#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnts=1,cnta=1,d,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     sort(arr, arr+n);

     for(int i=0;i<n-1;i++)
     {
         //cout<<arr[i]<<" ";
         if(arr[i]==arr[i+1])
         {


            cnts++;
         }
         else
         {


            cnta++;
            cnts=1;
         }
         if(sum<cnts)
            sum=cnts;
     }





 //cout<<sum<<" "<<cnta<<endl;
 if(sum==cnta)
    cout<<sum-1<<endl;
 else

      cout<<min(sum,cnta)<<endl;
}


int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}

