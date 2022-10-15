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

}




int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int arr1[]={1,8,10,12,1,3,4,5};
    mergeSortedArray(arr1,0,3,4,7);

    finalarray(ans,8);



    return 0;
}