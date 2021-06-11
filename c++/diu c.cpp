#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int aray[n];
    aray[0]=1;
    aray[1]=1;
    for(i=2;i<n;i++){
        aray[i]=aray[i-1] + aray[i-2];
       /*if(i==(n-1)){
         printf("%d\n", aray[i]);
        }*/
    }
     cout<<aray[n-1];
    return 0;
}
