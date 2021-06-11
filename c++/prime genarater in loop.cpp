#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int firstNumber,secoundNumber,i,j;
    cin>>firstNumber>>secoundNumber;
    for(i=firstNumber;i<=secoundNumber;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0){

                break;
            }

           else {

                cout<<i<<endl;
                break;
            }

        }
    }

}


