#include <iostream>
#include <vector>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std; 

int main()
{
  int hours,minutes,seconds;
  string c1;
  cin>>c1;
  hours = (c1[0]-'0')*10 + (c1[1]-'0');
  minutes=(c1[3]-'0')*10 + (c1[4]-'0');
  seconds=(c1[6]-'0')*10 + (c1[7]-'0');
  hours = hours%12;
   if(c1[8]=='P'){
      hours = hours+12;
   }
  // cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
  
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
return 0;
}