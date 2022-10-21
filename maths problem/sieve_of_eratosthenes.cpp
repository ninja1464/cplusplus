#include<bits/stdc++.h>
using namespace std;

int arr[1000000];


void eratothenes(int arr[], int n){
    
    for(int i=2;i<n;i++){
        arr[i]=1;
    }

    for(int i=2;i<=n/2;i++){
        if(arr[i]==1){
            for(int j=i*i;j<n;j=j+i){
                arr[j]=0;
            }
        }
        
    }


}


int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
  
    arr[0]=0;
    arr[1]=0;
    int n;
    cin>>n;

    eratothenes(arr,n);
    // for(int i=0;i<n+1;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}