#include<iostream>
using namespace std;
void staircase(int n){
    
    for(int i=n-1;i<=0;i--){
        cout<<' '<<endl;
    }
    for(int j=0;j<n;j++){
        cout<<char(35);
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    staircase(n);
    return 0;
}
