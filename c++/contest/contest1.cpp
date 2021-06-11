#include<iostream>
using namespace std;
int main()
{
    int personFloor,liftFloor,s,b;
    cin>>personFloor>>liftFloor;

    s=personFloor-liftFloor;
    if(s<0)
    {
        s=s*(-1);
    }
    b=(s*4)+(personFloor*4)+19;
    cout<<b;

}

