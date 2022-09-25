#include <iostream>
#include <vector>
#include<string>
using namespace std; 

int main()
{
    vector<string> stooges {"tommy","johnny","sunny"};
    vector<string> *vec_poi {nullptr};

    vec_poi = &stooges;
    cout<<"first stooge"<<(*vec_poi).at(0)<<endl;

    cout<<"Stooges";
    for(auto stooge: *vec_poi)
        cout<<stooge<<" ";
  
    
    cout<<endl;
return 0;
}