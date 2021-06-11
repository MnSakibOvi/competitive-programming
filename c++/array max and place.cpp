#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n],i,j;

     for(i=0;i<n;i++){
        cin>>array[i];
    }
     int m=array[0],s;
    for(i=0;i<n;i++){
       if(array[i]>m){
        m=array[i];
        s=i+1;
     }
    }
    cout<<m<<endl<<s;

}
