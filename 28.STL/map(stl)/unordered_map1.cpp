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
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(int i=0;i<items1.size();i++){
               if(mp.count(items1[i][0])>0){
                   amp[items1[i][0]]=mp[items1[i][0]]+items1[i][1];
               }else{
                   pair<int,int>p(items1[i][0],items1[i][1]);
                   mp.insert(p);
               }
        }
        for(int i=0;i<items2.size();i++){
               if(mp.count(items2[i][0])>0){
                   mp[items2[i][0]]=mp[items2[i][0]]+items2[i][1];
               }else{
                   pair<int,int>p(items2[i][0],items2[i][1]);
                   mp.insert(p);
               }
        }
        
        for(auto &item:mp){
            vector<int>v;
            v.push_back(item.first);
            v.push_back(item.second);
            ans.push_back(v);
        }
        return ans;
    }
};
int main(){

    vector<vector<int>>item1={[1,2],[2,3],[4,5],6,7};
    vector<vector<int>>item12={[1,2],[2,3],[4,5],6,7};


    mergeSimilarItems(item1,item2);

  
  return 0;
}