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
int main(){

    //size of array=(n<=10^6)
    //Ai represents element of th array
    //0<=Ai<=10^6
    //for these questions to store frequency element we can use frewuency array

    vector<int>v{1000000,10,1555 ,30400,50000,34,1000000,10,1000000};
    int freq_arr[1000001]={0};
    // for(int i=0;i<1000001;i++){
    //     arr[i]=0;
    // }

    for(auto &item:v){
        freq_arr[item]++;
    }

    int max_freq=freq_arr[0];
    int myelement=0;

    for(int i=0;i<1000001;i++){
        if(max_freq<=freq_arr[i]){
            max_freq=freq_arr[i];
            myelement=i;
            
        }
    }

    cout<<myelement<<endl;
    cout<<max_freq<<endl;
  
  return 0;
}