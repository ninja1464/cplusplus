#include<bits/stdc++.h>
using namespace std;


int ans[1000000];

void finalarray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}

void mergeSortedArray(int arr[],int s1,int e1, int s2, int e2){

    int i=s1,j=s2,k=0;

    while(i<e1+1&& j<e2+1){

        if(arr[i]<arr[j]){
            ans[k++]=arr[i++];
        }else{
            ans[k++]=arr[j++];
        }
    }
    
    if(i!=e1+1){
        while(i<(e1+1)){
            ans[k++]=arr[i++];
        }
    }
    if(j!=(e2+1)){
        while(j<(e2+1)){
            ans[k++]=arr[j++];
        }
    }
    int p=s1;
    for(int t=0;t<(e1-s1+1+e2-s2+1);t++){
        
        arr[p++]=ans[t];

    }

}




void mergesort(int arr[],int s, int e){

    if(s==e){
        return ;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    mergeSortedArray(arr,s,mid,mid+1,e);

}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    mergesort(arr,0,9);
    finalarray(arr,10);

    return 0;
}