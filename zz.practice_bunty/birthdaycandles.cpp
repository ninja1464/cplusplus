#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>


using namespace std;

int main(){
    int n;
    cin>>n;
    int candles[100];//int arr[100];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>candles[i];
        //sum =candles[i]+sum;
    }
    int count =1;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
           if(candles[i]==candles[j+i]){
              count++;
              break;
              //arr[i]=count;
           }//else{
        //        continue;
        //    }

        }
       //count = count-(count-1);
    }
    cout<<count;
    return 0;
}