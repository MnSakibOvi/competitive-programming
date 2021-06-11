

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,m;
    while(scanf("%lf:%jf",&h,&m))
    {
        if(h==0.00 && m==00.00)
           break;

        int mn=0;

        if(h==1)
            mn=35;
        else if(h==2)
            mn=40;
        else if(h==3)
            mn=45;
        else if(h==4)
            mn=50;
        else if(h==5)
            mn=55;
        else if(h==6)
            mn=60;
        else if(h==7)
            mn=5;
        else if(h==8)
            mn=10;
        else if(h==9)
            mn=15;
        else if(h==10)
            mn=20;
        else if(h==11)
            mn=25;
        else if(h==12)
            mn=30;

            float mn2=abs(mn-m);
            cout<<mn<<" "<<mn2<<endl;

 float degree1=0,degree2=0,res=0,m=0,m2=0;
 m=(5.00*m);
 m2=m/60.00;
 degree1=(m2*6);
 //cout<<degree1<<endl;
 degree2=mn2*6;
 res=180-(degree1+degree2);
 cout<<res<<endl;
  fflush(stdin);




    }
}



