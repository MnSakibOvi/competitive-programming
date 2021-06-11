#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="jannat";
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
            (i == j)?cout<<str[i]<<" ":cout<<"* ";
        cout<<endl;
    }
}
