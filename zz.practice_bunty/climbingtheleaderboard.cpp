#include <iostream>
#include <vector>
#include <stack>
using namespace std; 

int main()
{
    int n;int ranked[200];
    cin>>n;
    for(int  i=0;i<n;i++){
      cin>>ranked[i];
    }
    for(int i=0;i<n;i++){
      if(ranked[i]==ranked[i+1]){
          for(int j=i;j<n;j++){
          ranked[j]=ranked[j+1];
          }
          n=n-i;
      }
    
    }
    // for(int i=0;i<n;i++){
    //     cout<<ranked[i]<<" ";
    // }
   int m;int player[300];
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>player[i];
    }
    int count;
    for(int j=0;j<m;j++){
    for(int i=n-1;i>=0;i--){
     if(player[j]>ranked[i]){
       count=i+1;
       //break;
 }else if(player[j]==ranked[i]){
       count=i+1;
      break;
//        7
// 100 100 50 40 40 20 10
// 4
// 5 25 50 120
       }else{
   count=i+2;
   break;
//  }else{

// }
 }
   
    }
    cout<<count<<endl;
    }
    // for(){
        
    // }
    
    // }

    
return 0;

}
// 6
// 100 90 90 80 75 60
// 5
// 50 65 77 90 102