#include<bits/stdc++.h>
using namespace std;
int main()
{
//	  freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
	 cout<<"Lumberjacks:"<<endl;
    int t,f=0;;
    cin>>t;




    for(int j=1; j<=t; j++)
    {
//        if(j==1)
//        {
//            cout<<"Lumberjacks:"<<endl;
//
//        }
        int arr[10];
        for(int i=0; i<10; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]>arr[1])
        {
            int flag=0;
            for(int i=1; i<9; i++)
            {
                if(arr[i]<arr[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;

        }
        else
        {
            int flag=0;
            for(int k=1; k<9; k++)
            {
                if(arr[k]>arr[k+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;


        }


    }
    return 0;
}


