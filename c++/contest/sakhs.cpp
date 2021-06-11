#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
int main() {
   int hours,minutes,seconds,h1,m1,s1;
   char median[10];
   cout<<"Enter hours, minutes, seconds:";
   cin>>hours;
   cin>>minutes;
   cin>>seconds;
   cout<<"Enter median:";
   cin>>median;
   cout<<"Time in 12 hour format:"<<setfill('0') << setw(2) <<hours<<":"<<setfill('0') << setw(2)
   <<minutes<<":"<<setfill('0') << setw(2) <<seconds<<median<<endl; //setw()=sets the field width,
   //setfill()=set character as the streams fill character.
   if(strcmp(median,"pm")==0) { //compare the strings "0" is for true "1" is for false.
      if (hours<12) {
         h1=hours+12;
         m1=minutes;
         s1=seconds;
         cout<<"Time in 24 hour format:" <<h1<<":"<<setfill('0') << setw(2) <<m1<<":"<<setfill('0') << setw(2) <<s1<<median;
      } else if(hours=12) {
         h1=12;
         m1=minutes;
         s1=seconds;
         cout<<"Time in 24 hour format:"<<h1<<":"<<setfill('0') << setw(2) <<m1<<":"<<setfill('0') << setw(2) <<s1<<median;
      }
   } else if(strcmp(median,"am")==0) {
      if (hours<12) {
         h1=hours;
         m1=minutes;
         s1=seconds;
         cout<<"Time in 24 hour format:"<<setfill('0') << setw(2) <<h1<<":"<<setfill('0') << setw(2) <<m1<<":"<<setfill('0') << setw(2) <<s1<<median;
      } else if(hours=12) {
         m1=minutes;
         s1=seconds;
         cout<<"Time in 24 hour format:"<<"00"<<":"<<setfill('0') << setw(2) <<m1<<":"<<setfill('0') << setw(2) <<s1<<median;
      }
   } else {
     cout<<"Wrong choice";
   }
}
