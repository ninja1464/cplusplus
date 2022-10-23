#include<bits/stdc++.h>
using namespace std;

int i=0;

void doit(){
    if(i==1000){//base case
        return;
    }
    cout<<i<<endl;
    i++;
    doit();
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    doit();

    return 0;
}