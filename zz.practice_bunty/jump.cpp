#include <iostream>
#include <vector>
using namespace std; 
int jump(int nums[]){
   int n= 5;
    if (n == 1)
        return 0;
 
    // Traverse through all the points
    // reachable from arr[l]
    // Recursively, get the minimum number
    // of jumps needed to reach arr[h] from
    // these reachable points
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + nums[i] >= n - 1) {
            n = i+1;
            int sub_res = jump(nums);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }
 
    return res+2;
}
int main()
{
   
   int nums[]={2,3,1,1,4,7,5,3,2};
   cout<<jump(nums)<<endl;

return 0;
}