#include <iostream>
#include <stack>
using namespace std; 
void print_stack(stack<int> ss){
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
   
  
   print_stack(s1);

return 0;
}