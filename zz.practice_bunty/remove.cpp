#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(nums[i]==val){
            nums[i]=nums[i+1];
            for(int j=i+1;j<n;j++){
                nums[j]=nums[j+1];
            }
            i=i-1;
            n=n-1;
        }else{ 
           count++;
        }
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        return 0;
    }
};
int main()
{
    Solution ss;
     int va;
     cin>>va;
     vector<int> vect; 
     vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(60);
    vect.push_back(20);
    vect.push_back(50);
    vect.push_back(45);
    vect.push_back(20);
    vect.push_back(20);
    vect.push_back(20);
    vect.push_back(76);

 
     cout<<ss.removeElement(vect,va)<<endl;
return 0;
}