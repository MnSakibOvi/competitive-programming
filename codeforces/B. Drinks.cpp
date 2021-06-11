#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
double sum=0;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];

for(i=0;i<n;i++)
{
    sum=sum+arr[i];

}
double z=sum/n;
printf("%.12lf",z);

}
