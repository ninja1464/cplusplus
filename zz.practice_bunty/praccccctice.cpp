#include <iostream>
#include <vector>
using namespace std; 

int main()
{
     vector<int>ar{1,2,3,4,5};
    for(auto i:ar){
        cout<<i<<" ";
        cout<<endl;
    }
    //cout<<ar[2]<<endl;
return 0;
}