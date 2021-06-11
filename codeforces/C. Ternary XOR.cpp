#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        string x;
        cin>>n;
        int arr[n],arr2[n];
        cin>>x;
        arr[0]=1;
        arr2[0]=1;
        cout<<arr[0];
        for(int i=1; i<n; i++)
        {
            if(flag==0)
            {



                if(x[i]=='0')
                {
                    arr[i]=0;
                    arr2[i]=0;
                }
                if(x[i]=='1')
                {
                    arr[i]=1;
                    arr2[i]=0;
                }
                if(x[i]=='2')
                {
                    arr[i]=1;
                    arr2[i]=1;
                }
            }
          if (flag==1)
            {
                if(x[i]=='0')
                {
                    arr[i]=0;
                    arr2[i]=0;
                }
                if(x[i]=='1')
                {
                    arr[i]=0;
                    arr2[i]=1;
                }
                if(x[i]=='2')
                {
                    arr[i]=0;
                    arr2[i]=2;
                }
                flag=1;
               // cout<<"YES";

            }
            if(x[i]=='1')
                flag=1;
            cout<<arr[i];

        }
        cout<<endl;
        for(int i=0; i<n; i++)
            cout<<arr2[i];

        cout<<endl;


    }
}
