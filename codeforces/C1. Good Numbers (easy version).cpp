

#include <bits/stdc++.h>
using namespace std;
bool check(long long int n)
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

   long long  int n;
     cin>>n;
     while(n)
     {
         if(check(n))

         {
             cout<<n<<endl;
             break;
         }
         else
            n++;

     }
 }

}


