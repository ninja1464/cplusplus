#include <iostream>
#include <vector>
using namespace std; 
class Solution {
public:
    int reverse(int x) {
        int revrse=0,remainder;
        while(x!=0){
              if(revrse>INT_MAX/10 || revrse<INT_MIN/10)return 0;
            remainder=x%10;
            revrse=revrse*10+remainder;
            x/=10;
        }
        return revrse;
    }
};
int main()
{
    Solution ss;
    int n;
    cin>>n;
    cout<<ss.reverse(n);
return 0;
}