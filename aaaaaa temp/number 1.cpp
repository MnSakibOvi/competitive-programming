

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
  cin>>n;

    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]<arr[i+1])
                v.push_back(arr[i]);

        }
        else if(i==n-1)
        {
            if(arr[i]<arr[i-1])
                v.push_back(arr[i]);
        }
        else
        {
            if(arr[i]<arr[i-1] && arr[i]< arr[i+1])
            v.push_back(arr[i]);

        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;


}
