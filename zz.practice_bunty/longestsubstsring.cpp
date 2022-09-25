#include <iostream>
#include <vector>
using namespace std; 
void do00(string s){
    int count=0;int newcount[s.length()];
for(int i=1;i<s.length();i++){
    //newcount[i-1]=count;
    count=0;
    for(int j=0;j<i;j++){
if(s[i]!=s[j]){
    count=count+1;
  
}else{
    break;
}
//count=0;
}
newcount[i-1]=count;
}
cout<<newcount<<endl;
}
int main()
{
    string s;
    cin>>s;
    do00(s);
return 0;
}