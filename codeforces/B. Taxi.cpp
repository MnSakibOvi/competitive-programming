#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,c=0,g=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    for(int i=0; i<n; i++)
    {

        for(i=0; i<n; i++)
        {

            sum=sum+arr[g];

            g++;
             cout<<arr[g]<<"   ";

            if(sum>=4)
            {

                sum=sum-arr[g];
                g--;
                break;
            }
            // cout<<sum<<"  ";
            // cout<<arr[g];
             if(arr[g]==arr[n-1])
                d=1;
        }
        c++;
       // cout<<sum<<endl;

        sum=0;
        if(d==1)
            break;

    }
    // cout<<"c"<<c+1;


}
