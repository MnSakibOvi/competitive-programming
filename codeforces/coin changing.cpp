#include<bits/stdc++.h>
using namespace std;

int arr[] = {1, 2, 3, 5, 10};
static int way = 0;
int amount = 3;
vector<int> v;
void solve(int taka, int i)
{
    if(taka > amount) return;
   // v.push_back(arr[i]);
    if(taka == amount)
    {
        way++;
        cout<<"way "<<way<<endl;
//        for(int k = 0; k<v.size(); k++)
//            cout<<v.at(k)<<" ";
        v.pop_back();
       // cout<<endl;
        return;
    }
    for(int i=0; i<5; i++)
    {
        solve(taka+arr[i], i);
    }
}
int main()
{
    solve(0, 0);
}
