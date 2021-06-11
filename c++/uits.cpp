#include<iostream>
using namespace std;
int main()
{
    int n,m,i,sum=0,k=0;
    cin>>n>>m;
    for(i=n;i<=m;i++){
        k=i*i;
        sum=sum+k;

    }
    cout<<sum;
}
