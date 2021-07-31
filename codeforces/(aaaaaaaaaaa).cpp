
#include<bits/stdc++.h>
using namespace std;

void solve()
{
//int n,k,x;
//cin>>n>>k;
//int arr[n];
//vector<int>v;
//map<int,int>mp;
//for(int i=0;i<n;i++)
//   {
//       cin>>arr[i];
//       x=arr[i];
//       mp[x]++;
//       if(mp[x]<=k)
//       {
//           v.push_back(mp[x]);
//       }
//       else
//        v.push_back(0);
//
//   }
//   for(int i=0;i<v.size();i++)
//   {
//       cout<<v[i]<<" ";
//   }
//   cout<<endl;
//
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0; i<n; i++)
//    {
//        arr[i]=i+1;
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    while (next_permutation(arr, arr + n))
//    {
//        if(arr[0]!=1)
//            break;
//        for(int i=0; i<n; i++)
//        {
//
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//


int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<arr[i]<<"|"<<arr[j]<<" = ";
            int g=arr[i]|arr[j];
            cout<<g<<endl;
        }

        cout<<endl<<endl<<endl;
    }
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



