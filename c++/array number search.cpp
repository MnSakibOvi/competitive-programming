#include<iostream>
using namespace std;
int main()
{
    int n,l;
    cin>>n;
    int array[n],i,j;
cout<<"enter your numbers"<<endl;
     for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter the number you want"<<endl;
    cin>>l;

     int m=l,s;
    for(i=0;i<n;i++){
       if(array[i]==m){
        m=array[i];
        s=i+1;
         cout<<s<<endl;
     }

    }
    if(s!=i){
        cout<<"error"<<endl;
    }

return 0;

}
