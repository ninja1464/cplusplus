#include <iostream>
#include <vector>
using namespace std; 
void insertionsort(int arr[],int n){
   
    for(int i=0;i<n;i++){
        for(int j =i+1;j>=0;j--){
            int t=j;
          if(arr[t]<arr[j-1]){
            int temp = arr[t];
            arr[t]=arr[j-1];
            arr[j-1]=temp;
          }
        
        }
        }

}
 void  printArr(int arr[],int n){
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }
int main()
{
     int a[] = { 89, 45, 35, 8, 12, 2 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - "<<endl;  
    printArr(a, n);  
    insertionsort(a, n);  
    cout<<"\nAfter sorting array elements are - "<<endl;  
    printArr(a, n);  
return 0;
}