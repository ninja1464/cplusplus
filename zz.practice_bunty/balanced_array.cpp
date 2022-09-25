#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int arr [] {2,5,2,1,6};
    int n=5;
    //int count;
    int right_sum=0,left_sum=0;
    for(int i=0;i<n;i++){
      right_sum +=arr[i];
      for(int j>=n-1;j=i+2;j--){

      left_sum+=arr[j];
      }
      
      if(right_sum==left_sum){
        cout<<arr[i+1];
        break;
      }else{
         left_sum=0;
      }
    }

    cout<<right_sum<<endl;
     
return 0;
}