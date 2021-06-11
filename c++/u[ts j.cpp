#include<iostream>
using namespace std;
int main(){
int i,j,m,x=0,n;
string ch;
cin>>m;
int arra[m];{
for(i=1;i<=m;i++){
    cin>>ch;
    for(j=0;j<=m;j++){
    if(ch=='x++'){
        m=x+0;

    }
    if(ch=='x--'){
        m=x+0;
    }

    if(ch=='++x'){
        m=x+1;
    }
    if(ch=='--x'){
        m=x-1;
    }
    }
cout<<m;



}
}
}
