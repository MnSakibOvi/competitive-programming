
#include<bits/stdc++.h>
using namespace std;
string str,s[4]= {""};
bool check(int x,int y)
{  int sum=0,i=0;
   while(y>0)
{  int mod=y%10;
   sum+=mod*pow(2,i++);
   y/=10;
}
   if(x!=sum) return false;
   return true;
}

int main()
{
    int t;
    cin>>t;


    for(int k=1; k<=t; k++)
    {
        int a,b,c,d,flag=0;
        scanf("%d.%d.%d.%d",&a,&b, &c, &d);
        int a1,b1,c1,d1;
        scanf("%d.%d.%d.%d",&a1,&b1, &c1, &d1);

        //cin>>str;

       if( check(a,a1) && check(b,b1) && check(c,c1) && check(d,d1))

       flag=0;
       else
		flag=1;





          cout<<"Case "<<k;
          if(flag==0)
		cout<<": Yes"<<endl;
	    else
		cout<<": No"<<endl;




    }

}




