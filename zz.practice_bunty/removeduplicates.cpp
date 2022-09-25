#include <iostream>
#include <vector>
using namespace std; 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        // if(n==1){
        //     return 0;
        // }
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                for(int j =i;j<n;j++){
                    nums[j]=nums[j+1];
                }
                n=n-1;
                i=i-1;
            }else{
                k++;
            }
        }
        
        return k;
    }
};
int main()
{
    Solution s1;
    vector <int> vect;
    //vect.push_back(0);
    // vect.push_back(0);
     vect.push_back(1);
     //vect.push_back(1);
    // vect.push_back(1);
    // vect.push_back(1);
    //  vect.push_back(2);
    // vect.push_back(2);
    // vect.push_back(3);
    // vect.push_back(3);
    // vect.push_back(4);
    
    cout<<s1.removeDuplicates(vect)<<endl;
return 0;
}