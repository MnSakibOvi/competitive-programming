


#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
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

        int k=prime(g);
        if(k==1)
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

            int k=prime(g);
            if(k==1)
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



