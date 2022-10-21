#include<bits/stdc++.h>
using namespace std;


int gcd(int num1, int num2){

    int ans;
    int mim_num=min(num1,num2);
    for(int i=1;i<=mim_num;i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }

    return ans;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    cout<<gcd(7,8)<<endl;



    return 0;
}