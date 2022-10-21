#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    bool prime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

void primefiller(int arr[],int n){//complexity is O(n*ssqrt(n))

    arr[0]=arr[1]=0;
    for(int i=2;i<n+1;i++){
        if(isprime(i)==0){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }
   
}



int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    
    int arr[100001];
    int n;
    cin>>n;

    primefiller(arr,n+1);

    for(int i=0;i<=n;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    



    return 0;
}