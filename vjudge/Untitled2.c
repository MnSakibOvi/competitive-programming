#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,cnti=0,cntj=0,l,s;

    // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
     while(scanf("%ld%ld",&i,&j)==2)
    {


      int mn=0;
        if(i>0 && j>0 && i<1000000&& j<1000000)
        {

            int clonei=i,clonej=j;
            if(i>j)
            {


                l=i;
                s=j;
            }
            else
            {
                l=j;
                s=i;

            }


//cout<<" i ="<<i<<endl;
            for(int k=s; k<=l; k++)
            {
                int x=k;

                while (k!=1)
                {
                    if(k%2==0)
                        k=k/2;
                    else
                        k=(k*3)+1;
                    //cout<<k<<" ";
                    cnti++;
                }
                if(cnti>mn)
                    mn=cnti;

                cnti=0;
                k=x;

            }
            cout<<clonei<<" "<< clonej<<" "<<mn+1<<endl;
        }

    }
}

