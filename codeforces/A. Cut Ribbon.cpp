#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,i,cnt=0,arr[3],sum=0;
    cin>>n;
    for(i=0; i<3; i++)
        cin>>arr[i];
    sort(arr, arr+3);
    int a=arr[0],b=arr[1],c=arr[2];
    if(n%a==0)
        cout<<n/a<<endl;
    else
    {
        int cnt=n/a,sum=n%a,sum2=n%a,mx=0,cl=0;
        while(n>sum && n>sum2)
        {
            sum=sum+a;
            sum2=sum2+a;
            //cout<<sum<<endl;
            cnt--;
            if(sum%b==0)
            {
                cl=cnt;
                cnt=cnt+(sum/b);

                mx=max(cnt,mx);
                cnt=cl;
                //break;
            }
            if(sum2%c==0 )
            {
                cl=cnt;
                cnt=cnt+(sum2/c);
                mx=max(cnt,mx);
                cnt=cl;
            }
            else if(sum2%c==b)
            {
                cl=cnt;
                cnt=cnt+(sum2/c);
                cnt++;
                mx=max(cnt,mx);
                cnt=cl;
            }



        }
        cout<<mx<<endl;
    }


}



