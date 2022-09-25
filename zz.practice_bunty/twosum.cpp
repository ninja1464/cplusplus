#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int nums[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
     
          if(nums[i]+nums[j]==target){
              cout<<i<<" "<<j<<endl;
          }
        }
    }
return 0;
}