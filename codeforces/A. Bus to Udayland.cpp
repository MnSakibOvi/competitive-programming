
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t,flag=0;
    cin>>t;
    char arr1[t],arr2[t],arr_[t],arr3[t],arr4[t];
    for(int i=0;i<t;i++)
       cin>> arr1[i]>>arr2[i]>>arr_[i]>>arr3[i]>>arr4[i];
    for(int j=0;j<t;j++)
    {
        if(arr1[j]=='O' && arr2[j]=='O')
        {
            arr1[j]='+';
            arr2[j]='+';
            flag=1;
            break;

        }
        if(arr3[j]=='O' && arr4[j]=='O')
        {
            arr3[j]='+';
            arr4[j]='+';
            flag=1;
            break;

        }

    }
    if(flag==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<t;i++)
       cout<< arr1[i]<<arr2[i]<<arr_[i]<<arr3[i]<<arr4[i]<<endl;
    }

}
int main()
{

    int m;
   m=1;
    while(m--)
        solve();
}

