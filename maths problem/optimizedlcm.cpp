#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
 
    while(a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}

int lcm(int a, int b){
    return a*b/(gcd(a,b));
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    cout<<lcm(5,10)<<endl;

    return 0;
}