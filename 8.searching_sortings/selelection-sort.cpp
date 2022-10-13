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

    int arr[]={7,4,3,8,4,2,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"prior"<<endl;

    print(arr,n);
    cout<<endl;
//we used i < n-1 bcuz we dont perfrm last iteration bcuz in the second lat iteration olny n-1 element are at correct posiotion this ensure that last is already at correct osition
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>=i+1;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }

        cout<<"after "<<i<<" swap"<<endl;

        print(arr,n);

    }

    cout<<endl;
    cout<<"final"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
  return 0;
}