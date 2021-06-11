#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd,even,cnt=0,cnt2=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even=i;
        else
            odd=i;
    }
  //  cout<<odd<<" "<<even;
    for(int j=0; j<3; j++)
    {
        if(arr[j]%2==0)
            cnt++;
        else
            cnt2++;
    }
    if(cnt>cnt2)
        cout<<odd+1;
    else
        cout<<even+1;


}
