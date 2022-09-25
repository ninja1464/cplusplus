#include <iostream>
#include <vector>
using namespace std; 

void selectionsort(int a[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[] = {4,3,7,3,8,2,9,1};
    int n = 8;
    cout<<"before sorting"<<endl;

    print(arr,n);
    
    selectionsort(arr,n);
    cout<<endl;
    cout<<"after sorting"<<endl;
    print(arr,n) ;

return 0;
}