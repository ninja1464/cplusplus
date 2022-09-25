#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    //int dd=0;
    while(num>9){
        int dd=0;
        while(num>0){
            dd += num%10;
            num /= 10;
        }
        num=dd;
    }
    cout<<num<<endl;
    return 0;
}