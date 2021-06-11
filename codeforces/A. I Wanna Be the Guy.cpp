#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt,c,m=0;
    cin>>n;
    int s;
    cin>>s;
    int arr[s];
    int arr3[100];
    map<int,int>mp;
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
       mp[arr[i]]++;

    }
    int l;
    cin>>l;
    int arr2[l];
    for(int j=0; j<l; j++)
    {
        cin>>arr2[j];
       mp[arr2[j]]++;
    }

  cnt=mp.size();
 // cout<<cnt;



        if(cnt>=n)
            cout<<"I become the guy.";
        else
            cout<<"Oh, my keyboard!";


}
