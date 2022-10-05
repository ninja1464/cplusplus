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

class max_priorityqueue{
        public:
          //int last_index=0;
          vector<int>cbt;
          void upheapyfy(){
            int parent_index=0;
          }

          void downheapify(){

          }
          void push(int data){
            cbt.push_back(data);
            upheapyfy();
          }
          void pop(){
            swap(cbt[0],cbt[cbt.size()-1]);
            cbt.pop_back();
            downheapify();
          }
          int  top{}{
              return cbt[0];
          }
          int size(){
            return cbt.size();
          }
}

int main(){
  
  
  return 0;
}