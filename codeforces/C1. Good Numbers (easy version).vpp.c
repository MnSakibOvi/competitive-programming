
#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    while(n)
    {
        int g=n%3;
        if(g==2)
            return false;
        n=n/3;
    }
    return true;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {

     int n;
     cin>>n;
     while(n)
     {
         if(check(n))
            cout<<

     }
 }

}


