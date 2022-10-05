#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
#include<fstream>
#include<queue>
#include<cstring>
#include<sstream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
//all the map funtions are same in the det but dset store only unique keys
    vector<int>v={1,2,2,4,5,7,8,8};
//unirdered set gibes element in random order
    unordered_set<int>s;
    for(auto &item:v){
        s.insert(item);
    }
  
    for(auto &item:s){
        cout<<item<<" ";
    }
    cout<<endl;

    int t;
    cin>>t;
    while(t--){
        int in;
        cin>>in;
        if(s.count(in)){
            cout<<"persent"<<endl;
        }else{
            cout<<"not present"<<endl;
        }
    }
  return 0;
}