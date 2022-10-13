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
void print(vector<int>v){
      for(auto item:v){
        cout<<item<<" ";
      }
      cout<<endl;
}

class max_priorityqueue{
        public:
          //int last_index=0;
          vector<int>cbt;
          void upheapyfy(){
            int children_index=cbt.size()-1;
            while(children_index>0){
              int parent_index=(children_index-1)/2;
              if(cbt[children_index]>cbt[parent_index]){
                swap(cbt[children_index],cbt[parent_index]);
                children_index=parent_index;
              }else{
                break;
              }
            }
          }

          void downheapify(){
            int parent_index=0;
            while(true){
              
              int children_index1=2*parent_index+1;
              int children_index2=2*parent_index+2;
              if(children_index1>(cbt.size()-1)){
                  break;
              }

              int max_index = children_index1;
              if(cbt[children_index1]>=cbt[children_index2]){
                max_index=children_index1;
              }else{
                max_index=children_index2;
              }

              if(cbt[parent_index]<cbt[max_index]){
                  swap(cbt[parent_index],cbt[max_index]);
                  parent_index=max_index;
               }else{
                break;
               }
             
            }
            

          }
          void push(int data){
            cbt.push_back(data);
            upheapyfy();
          }
          void pop(){
            swap(cbt[0],cbt[cbt.size()-1]);
            print(cbt);
            cbt.pop_back();
             print(cbt);
            downheapify();
          }
          int  top(){
              return cbt[0];
          }
          int size(){
            return cbt.size();
          }



};


// void print(vector<int>v){
//       for(auto &item:v){
//         cout<<item<<" ";
//       }
//       cout<<endl;
// }
int main(){
  max_priorityqueue myheap;
  myheap.push(1);
  myheap.push(2);
  myheap.push(3);
  myheap.push(4);
  myheap.push(5);

  for(auto &item:myheap.cbt){
    cout<<item<<" "<<endl;
  }
  cout<<endl;

  while(myheap.size()>0){
    // print(myheap.cbt);
    cout<<myheap.top()<<" "<<endl;
    myheap.pop();
  }
  
  // print(myheap.)

  
  return 0;
}