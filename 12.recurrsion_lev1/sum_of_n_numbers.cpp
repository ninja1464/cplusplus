#include<bits/stdc++.h>
using namespace std;
int sum=0;
int i=0;

void sumOfN(int n){

    if(i==n+1){
        return;
    }
    sum=sum+i;
    i++;
    sumOfN(n);
 
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    sumOfN(100);
    cout<<sum<<endl;

    return 0;
}