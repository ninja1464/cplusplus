#include<bits/stdc++.h>
using namespace std;

int i=0;

void print(int n){

    if(i>n){
        return;
    }
    cout<<i<<endl;
    i++;
    print(n);
}


int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    i=(-1*n);
    print(n);
    return 0;
}