#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,arr[10],sum=10000001;
    cin>>n>>m>>a>>b;

    arr[0]=n*a;
//     s=(n%m);
//        d=n/m;
    if(n%m==0)
    {
        arr[1]=(n/m)*b;
        arr[2]=10000001;
    }
    else
    {

        arr[1]=((n/m)+1)*b;
        arr[2]=ceil(float(n/m))*b+a;

    }
    if(n/m==0)
        arr[2]=10000001;


    for(int i=0;i<3;i++)
    {
       cout<<arr[i]<<endl;
        if(arr[i]<sum)
            sum=arr[i];
    }
    cout<<sum;

}
