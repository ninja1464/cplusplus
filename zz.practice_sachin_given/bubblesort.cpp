#include <iostream>
#include <vector>
using namespace std; 
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[]  { 82, 45, 35, 45, 12, 3 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - "<<endl;  
    printArr(a, n);  
    bubblesort(a, n);  
    cout<<"\nAfter sorting array elements are - "<<endl;  
    printArr(a, n);  
return 0;
}