#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n][n],i,j,sum=0;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cin>>array[i][j];
     }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if (i<j)
           {
               sum=sum+array[i][j];
           }
     }
    }
   cout<<sum;


}
