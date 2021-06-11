#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0)
       return ;
    else
    {



        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    fun(5);
   // cout<<result<<endl;
}
