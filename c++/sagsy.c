#include<stdio.h>


int main()
{
    int m,n,i,d,k,s,o=0,b,r=0,l=0,p,j;
    scanf("%d %d",&m,&n);
    s=m/n;
    j=s;
    r=m%n;
    d=r;
    for(i=0;i<=m;i++){
        r=s%n;
        s=s/n;
        o=o+r;
        l=l+s;
       if(s==0){
        break;
       }
    }
    b=(o+r)/n;
    p=l+m+j+b;
    printf("%d",p);
}
