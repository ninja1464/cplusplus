#include<bits/stdc++.h>
using namespace std;

void sum(int n,int &mysum,int i){
    if(i>n){
        return;
    }
    mysum=mysum+i;
    i++;
    sum(n,mysum,i);
   
}
int sum(int n){
    int mysum=0;
    int i=0;
    sum(n,mysum,i);

    return mysum;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}