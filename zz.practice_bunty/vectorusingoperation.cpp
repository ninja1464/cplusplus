#include <iostream>
#include <stack>
using namespace std; 
void newstack(stack<int> ss){
 while(!ss.empty()){
     cout<<ss.top()<<" ";
     ss.pop();
 }
}
int main()
{
    stack<int>s1;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
   
  
   newstack(s1);

return 0;
}