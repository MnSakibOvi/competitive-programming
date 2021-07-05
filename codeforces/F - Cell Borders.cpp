
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int fl=0,cl=0;
    for(int i=0; i<n; i++)
    {
//        if(i<n-1 && arr[i]==2 && arr[i+1]==0 || i<n-1 && arr[i]==0 && arr[i+1]==2)
//            flag=1;
        if(arr[i]!=1 && fl==0)
        {
            fl=1;
            cl=arr[i];
            // cout<<cl<<" "<<arr[i]<<endl;
            continue;
        }
        if(fl==1)
        {
            if(arr[i]!=1)
            {
                int g=arr[i]+cl;
               // cout<<cl<<" "<<arr[i]<<endl;
                if(g==2 && o%2==0)
                    flag=1;
               else if(g==0 && o%2==1)
                    flag=1;
                else if(g==4 && o%2==1)
                    flag=1;

                cl=arr[i];
                o=0;

            }
            else
            {
                o++;
            }
        }

    }

    if(flag==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;


}
