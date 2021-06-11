#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n,k,m,sum=0,mod;
cin>>n;
for(int i=1;i<=n;i++){
    m=n%i;
    if(m==0){
            sum=sum+1;
    }
    }
mod=sum%2;
if(mod==0){
    cout<<"debi is happy"<<endl;
}
else{
    cout<<"debi cries"<<endl;
}
}
