#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    bool isPalindrome(int x) {
        int revrse=0,n=x;
        while(n!=0){
            
            
            revrse = revrse*10+n%10;
            n = n/10;
        }
     if(x==revrse){
         return 1;
     }else{
        return 0;
       
    }
}
    
};

int main()
{
    Solution st;

    int x;
    cin>>x;
    cout<<st.isPalindrome(x)<<endl;

    return 0;
}