#include<iostream>
using namespace std;
int main()
{
    int i,n,d,e=0,sum=0;
    cin>>d;
    for(i=1;i<=d;i++)
    {
        if(i%2!=0)
        {
            n=i*(-1);
            e=n;
        }
       else
       {
            e=i;
            }
    sum=sum+e;
    }
    cout<<sum;
}
