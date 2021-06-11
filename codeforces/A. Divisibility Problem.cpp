#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i]>>arr2[i];
       if(arr1[i]%arr2[i]==0)
        cout<<"0"<<endl;
       else{
        int h=arr1[i]/arr2[i];
        int k=((h+1)*arr2[i])-arr1[i];
        cout<<k<<endl;
       }
    }

}
