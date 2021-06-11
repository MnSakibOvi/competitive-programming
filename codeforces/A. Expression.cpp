#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,g=0;
    int sum[5];
    cin>>a>>b>>c;
    sum[0]=a+(b*c);
    sum[1]=a*(b+c);
    sum[2]=a*b*c;
    sum[3]=(a+b)*c;
    sum[4]=a+b+c;
    for(int i =0;i<5;i++)
    {
        if(sum[i]>g)
        g=sum[i];

    }
    cout<<g;
}



