#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
#include<fstream>
#include<queue>
#include<cstring>
#include<sstream>

using namespace std;

void print(int *arr,int n){
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr []= {6,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    //int swap_count=0;
    cout<<"array before bubble sorting"<<endl;

    print(arr,n);
    cout<<endl;
    //we used i < n-1 bcuz we dont perfrm last iteration bcuz in the second lat iteration olny n-1 element are at correct posiotion this ensure that last is already at correct osition
    for(int i=0;i<n-1;i++){
        int swap_count=0;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swap_count++;
            }       
        }
        if(swap_count==0){
            break;
        }
       cout<<"after "<<i<<" swap"<<endl;
       print(arr,n);
    }
    cout<<endl;
    print(arr,n);

  return 0;
}