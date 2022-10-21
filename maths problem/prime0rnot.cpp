#include<bits/stdc++.h>
using namespace std;

int prime(int n){

    bool prime=true;
//complexity will be O(sqrt(n))
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int n;
    cin>>n;
    if(prime(n)==0){
        cout<<"not prime"<<endl;
    }else{
        cout<<"its a prime"<<endl;
    }

    //cout<<prime(15)<<endl;

    return 0;
}