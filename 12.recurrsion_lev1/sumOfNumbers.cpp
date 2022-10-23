#include<bits/stdc++.h>
using namespace std;

int sum=0;
int i=0;
void recu(int n, int org){
    if(i>n){
        return;
    }
    sum=sum+i;
    i++;
    recu(n,org);
}

int recu(int n){//Helper Function
    int org=n;
    if(n<0){
        n=(-n);
    }
    recu(n,org);
    if(org<0){
        return -sum;
    }

    return sum;
}


int loop(int n){
    int sum=0;
    int temp=n;
    if(n<0){
        temp=(-n);
    }
    for(int i=1;i<=temp;i++){
        sum=sum+i;
    }
    if(n<0){
        return (-1*sum);
    }

    return sum;

}


int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    cout<<loop(n)<<endl;
    cout<<recu(n)<<endl;
    return 0;
}