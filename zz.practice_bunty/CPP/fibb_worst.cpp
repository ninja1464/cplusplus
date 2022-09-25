
#include<iostream>
using namespace std; 
int fibbo(int n){
    if(n==0 || n==1){
        return n;
    }
    int small1=fibbo(n-1);
    int small2=fibbo(n-2);

    return (small1+small2);
}
int main(){
    cout<<fibbo(50);

    return 0;
}