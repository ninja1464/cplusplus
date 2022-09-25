#include<iostream>
#include<vector>
//#include<iomath>

using namespace std;

vector<int> bunty(10);
int top = -1;

void push(int x){
if(top== bunty.size()-1){
    cout<<"stack gone wrong xd"<<endl;
}else{
bunty[++top]=x;}
}
void pop(){
if(top == -1){
    cout<<"stack gone negative"<<endl;
    
}else{
    top--;
    bunty[top];}
}

void print(){
cout<<"here is original stack"<<endl;
for (int i = 0; i <=top; i++)
{
  cout<<bunty[i]<<endl;
}

}
int main(){
    push(10);
     push(14);
      push(1);
       
       pop();
       push(2);
       print();

    return 0;
}