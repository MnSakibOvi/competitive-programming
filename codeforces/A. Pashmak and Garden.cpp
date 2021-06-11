#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,arr[4],cnt=0,k,X,Y;
    cin>>x1>>y1>>x2>>y2;

      if(x1!=x2 && y1!=y2)//korno bindu
      {
          if(abs(x1-x2) == abs(y1-y2))
          cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
          else
          {
              cout<<"-1"<<endl;
          }
      }
    else
    {
        int XX=abs(x2-x1);
        int YY=abs(y2-y1);
        int sq=(XX*XX)+(YY*YY);
        int res=sqrt(sq);
        // cout<<res<<endl;
        if(x1==x2)
        {
            x1=x1+res;
            x2=x2+res;

        }

         else  if( y1==y2)
           {
               y1=y1+res;
               y2=y2+res;
           }
           cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;



    }


   }



