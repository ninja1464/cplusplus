#include<bits/stdc++.h>
using namespace std;

int lcm(int a , int b){

    int ans;
    int in=min(a,b);
    for(int i=2;true;i++){
        if(i%a==0 && i%b==0){
            ans=i;
            break;
        }
        
    }
    return ans;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    cout<<lcm(5,10)<<endl;

    return 0;
}