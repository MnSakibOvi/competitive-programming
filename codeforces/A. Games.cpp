#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    map<int,int>mp;
        for(int i=0;i<n;i++)
        {

            cin>>arr1[i]>>arr2[i];
            mp[arr2[i]]++;
        }
        int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=mp[arr1[i]];
      }
cout<<sum<<endl;

}
