#include<bits/stdc++.h>
using namespace std;


void sum(int *arr,int n,int &mysum,int i){

        if(i>n-1){
            return;
        }
        mysum=mysum+arr[i];
        i++;
        sum(arr,n,mysum,i);

}

int sum(int *arr, int n){
    int mysum=0;
    int i=0;
    sum(arr,n,mysum,i);

    return mysum;
}
int i=0;
void printArray(int *arr,int n){
    if(i>n-1){
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    printArray(arr,n);

}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int arr[]={3,4,7,2,1,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<sum(arr,n)<<endl;
    printArray(arr,n);
    return 0;
}