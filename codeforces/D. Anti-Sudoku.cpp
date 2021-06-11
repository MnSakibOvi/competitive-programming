
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[9],arr2[9],l;

        for(int i=0; i<9; i++)
        {

            cin>>arr[i];

        }
       //cout<<endl<<endl;
        int m=arr[0]/100000000;
        //cout<<m;
        l=m%10;
        if(l<9)
            arr[0]=arr[0]+100000000;
        else
            arr[0]=arr[0]-100000000;



        m=arr[1]/100000;
        l=m%10;
        if(l<9)
            arr[1]=arr[1]+100000;
        else
            arr[1]=arr[1]-100000;

        m=arr[2]/100;;
        l=m%10;
        if(l<9)
            arr[2]=arr[2]+100;
        else
            arr[2]=arr[2]-100;



        m=arr[3]/10000000;
        l=m%10;
        if(l<9)
            arr[3]=arr[3]+10000000;
        else
            arr[3]=arr[3]-10000000;


        m=arr[4]/10000;
        l=m%10;
        if(l<9)
            arr[4]=arr[4]+10000;
        else
            arr[4]=arr[4]-10000;



        //arr[4]=arr[4]+10000;

        m=arr[5]/10;
        l=m%10;
        if(l<9)
            arr[5]=arr[5]+10;
        else
            arr[5]=arr[5]-10;

        //arr[5]=arr[5]+10;

        m=arr[6]/1000000;
        l=m%10;
        if(l<9)
            arr[6]=  arr[6]+1000000;
        else
            arr[6]=  arr[6]-1000000;

        //arr[6]=arr[6]+1000000;
        m=arr[7]/1000;
        l=m%10;
        if(l<9)
            arr[7]=arr[7]+1000;
        else
            arr[7]=arr[7]-1000;

        //arr[7]=arr[7]+1000;
        m=arr[8]/1;
        l=m%10;
        if(l<9)
            arr[8]=  arr[8]+1;
        else
            arr[8] =arr[8]-1;
        // arr[8]=arr[8]+1;

        for(int k=0; k<9; k++)
        {
            cout<<arr[k]<<endl;
        }



    }
}
