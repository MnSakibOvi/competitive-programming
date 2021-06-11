

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t=0;
    string str;
    while(cin>>str)
    {
        if(str=="#" )
            break;
    t++;
//        if(t>1)
//            cout<<endl;
        if(str=="HELLO" )
            cout<<"Case "<<t<<": "<<"ENGLISH";
        else if(str=="HOLA" )
            cout<<"Case "<<t<<": "<<"SPANISH";
        else if(str=="HALLO" )
            cout<<"Case "<<t<<": "<<"GERMAN";
        else if(str=="BONJOUR" )
            cout<<"Case "<<t<<": "<<"FRENCH";
        else if(str=="CIAO" )
            cout<<"Case "<<t<<": "<<"ITALIAN";
        else if(str=="ZDRAVSTVUJTE" )
            cout<<"Case "<<t<<": "<<"RUSSIAN";
            else
             cout<<"Case "<<t<<": "<<"UNKNOWN";

             cout<<endl;



    }




}
int main()
{
		//freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}


