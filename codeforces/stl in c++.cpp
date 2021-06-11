
#include<bits/stdc++.h>
using namespace std;
int main()
{

    array<int,5>arr;
    for(auto i=0;i<arr.size();i++){
    cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(auto j=0;j<arr.size();j++){
    cout<<*j;
    }
    return 0;
}




    //cout<<arr.at(i)
//}
//#include<iostream>
//#include<array>
//using namespace std;
//int main()
//{
//    int i,j;
//    array<int,5>arr;
//    for(i=0;i<5;i++){
//    cin>>arr[i];
//    }
//    for(j=0;j<5;j++){
//    cout<<arr[j];
//    }
//    return 0;
//}
