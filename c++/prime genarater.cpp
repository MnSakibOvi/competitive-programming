#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int firstNumber,secoundNumber,i;
    cin>>firstNumber>>secoundNumber;
    for(i=firstNumber;i<=secoundNumber;i++)
    {
        if(i==1)
        {
            continue;
        }
        else if(i==2 || i==3 || i==5 || i==7 || i==11  )
        {
            cout<<i<<endl;
        }

        else if( i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0 && i%13!=0 && i%17!=0)
        {
            cout<<i<<endl;
        }
        else
            {
                continue;
            }
    }
}

