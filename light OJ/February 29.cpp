


#include<bits/stdc++.h>
using namespace std;
int main()
{
//    map<long int ,int>mp;
//     for(long  int i=2000;i<=100000;i=i+4)
//    {
//        int flag=0;
//
//        if (i % 4 == 0) {
//        if (i % 100 == 0) {
//            if (i % 400 == 0)
//               flag=1;
//        }
//        else
//            flag=1;
//        }
//        if(flag==1)
//          mp[i]++;
//
//    }
//    cout<<mp[2004]<<endl;

    int t;
    cin>>t;


    for(int k=1; k<=t; k++)
    {

    string m1,m2;
    int d1,d2,y1,y2;
    char c;
    cin>>m1>>d1>>c>>y1;
    cin>>m2>>d2>>c>>y2;
    if(m1!="January" && m1!="February")
        y1++;
    if(m2=="January" || m2=="February" && d2!=29)
        y2--;


  y1--;
    int divf=(y2/4)-(y1/4);
    int divfh=(y2/400)-(y1/400);
    int divhun=(y2/100)-(y1/100);

   int res=divfh-divhun+divf;
        cout<<"Case "<<k<<": "<<res<<endl;;




    }
    return 0;
}

