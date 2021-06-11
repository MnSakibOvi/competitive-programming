#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t,flag=0,cnt1=0,cnt2=0;
    string arr[2];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string x;
        cin>>x;
        if(i==0)
        arr[0]=x;
        else
        {
            if(flag==0 && x!=arr[0])
            {
                arr[1]=x;
            flag=1;
            }
        }
        if(x==arr[0])
            cnt1++;
        if(x==arr[1])
            cnt2++;


    }
   // cout<<cnt1<<"==1 ||| 2=="<<cnt2<<endl;
   if(cnt1>cnt2)
    cout<<arr[0]<<endl;
   else
    cout<<arr[1]<<endl;
}


