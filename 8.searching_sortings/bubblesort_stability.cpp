#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
#include<fstream>
#include<queue>
#include<cstring>
#include<sstream>

using namespace std;

void print(vector<pair<int,int>>pv){
    for(auto &item:pv){
        cout<<item.second<<" "<<item.first<<endl;
    }
}
int main(){
  vector<int>v={1,6,8,1,9,3,4,5,5,9,9};
  vector<pair<int,int>>pv;
  int n=v.size();
  for(int i=0;i<n;i++){
        pair<int,int>p(i,v[i]);
        pv.push_back(p);
  }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(pv[j].second>pv[j+1].second){
                swap(pv[j].second,pv[j+1].second);
            }
        }
    }

  
    cout<<"output"<<endl;
    print(pv);
  
  return 0;
}