#include<bits/stdc++.h>
bool myfunc(int a, int b)
{
    return(a>b);
}
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    v.push_back(34);
    v.push_back(30);
    v.push_back(23);
    v.push_back(21);

    cout<<v.at(2)<<endl;
    cout<<v.size()<<endl;
    for(int i=1; i<6; i++)
    {
        v.push_back(i);
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<endl;
    }
    it = v.begin();
    sort(v.begin(),v.end(),myfunc);
    for(it=v.begin(); it<v.end(); it++)
    {
        cout<<*it<<"\t";
    }

}

