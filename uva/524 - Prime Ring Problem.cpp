


#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<int,int>mp;
    mp[2]=1;
    mp[3]=1;
    mp[5]=1;mp[7]=1;mp[11]=1;
    mp[13]=1;mp[17]=1;mp[19]=1;
    mp[23]=1;mp[29]=1;mp[31]=1;
 //   freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);


    int n,t=1;

   while( cin>>n && n!=0)
   {
       cout<<"Case "<<t<<":"<<endl;
       t++;
if(n%2==1 && n!=1)
{
    cout<<endl;

    continue;
}

    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=i+1;
    }
    int g,flag=0;
    for(int i=0; i<n; i++)
    {
        if(i<n-1)
        {
            g=arr[i]+arr[i+1];
        }
        else
        {
            g=arr[0]+arr[n-1];
        }


        if(mp[g]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(int i=0; i<n; i++)
        {
           if(i<n-1)
                cout<<arr[i]<<" ";
                else cout<<arr[i];


        }
        cout<<endl;
//        for(int i=n-1; i>=0; i--)
//        {
//            cout<<arr[i]<<" ";
//
//        }
//        cout<<endl;
    }
    while (next_permutation(arr, arr + n))
    {
        if(arr[0]!=1)
            break;
        flag=0;
        for(int i=0; i<n; i++)
        {
            if(i<n-1)
            {
                g=arr[i]+arr[i+1];
            }
            else
            {
                g=arr[0]+arr[n-1];
            }

          if(mp[g]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(int i=0; i<n; i++)
            {
                if(i<n-1)
                cout<<arr[i]<<" ";
                else cout<<arr[i];

            }
            cout<<endl;
//            for(int i=n-1; i>=0; i--)
//            {
//                cout<<arr[i]<<" ";
//
//            }
//            cout<<endl;
        }

    }

    cout<<endl;
   }

}



