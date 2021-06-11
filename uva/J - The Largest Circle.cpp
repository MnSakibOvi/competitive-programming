
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}

void decimalToFraction(double number)
{

    double intVal = floor(number);

    double fVal = number - intVal;


    const long pVal = 1000000000;


    long long gcdVal
        = gcd(round(fVal * pVal), pVal);


    long long num
        = round(fVal * pVal) / gcdVal;
    long long deno = pVal / gcdVal;


    cout << "("<<(intVal * deno) + num
         << "/" << deno<<")*pi" << endl;
}
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;

    while( cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4 )
    {
        if(x1==0 && y1==0 && x2==0 && y2==0 && x3==0 && y3==0 && x4==0 && y4==0)
        {
            break;
        }
        double b1,b2,b3,b4,b,c,d,e;
        b=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        b1=sqrt(b);
        c=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        b2=sqrt(c);

        d=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
        b3=sqrt(d);
        e=(x4-x1)*(x4-x1)+(y4-y1)*(y4-y1);
        b4=sqrt(e);

        double res;
        // map<double,int>mp;mp[b1]++;mp[b2]++;mp[b3]++;mp[b4]++;int g=mp.size();
        if(b1==b2 && b2==b3 &&b3== b4 && b4==b1)
        {
            res=b1/2.00;
        }
        else
        {
            double mn=99999999.00;
            mn=min(b1,mn);
            mn=min(b2,mn);
            mn=min(b3,mn);
            mn=min(b4,mn);
            res=mn/2.00;


        }
        double r=res*res;
        //    cout<<r<<endl;
        if(r==int (r))
            cout<<"("<<r<<"/1)*p1"<<endl;
        else
        {
              decimalToFraction(r);


        }



    }


    return 0;
}
