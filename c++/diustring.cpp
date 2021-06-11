#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
getline(cin,str);
for(int i =0;i<str.length();i++){
    //cout<<str.at(i)<<endl;
    if(str.at(i)=='a'||str.at(i)=='e'||str.at(i)=='i'||str.at(i)=='o'||str.at(i)=='u'){
        cout<<"0";
    }
    else if(str.at(i)==' ')
        cout<<" ";
    else{cout<<"1";
    }
}
}
