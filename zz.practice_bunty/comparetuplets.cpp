#include <iostream>
#include <vector>
using namespace std; 
void compareTuplets(int ar[],int arr[]){
int tt[] ={0,0};
    
    for(int i=0;i<3;i++){
       if(ar[i]>arr[i]){
         tt[0]++;
         
    }else if(ar[i]<arr[i]){
         tt[1]++;
        
        }else{
            
     tt[1]=tt[1]+0;
     tt[0]=tt[0]+0;

}

    }
  cout<<tt[0]<< " " <<tt[1];

}
int main()
{
   
    int a[3];int b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int j=0;j<3;j++){
        cin>>b[j];
    }
   
   compareTuplets(a,b);
//     int tt[] ={0,0};
    
//     for(int i=0;i<3;i++){
//        if(a[i]>b[i]){
//          tt[0]++;fgg
         
//     }else if(a[i]<b[i]){
//          tt[1]++;
        
//         }else{
            
//      tt[1]=tt[1]+0;
//      tt[0]=tt[0]+0;

// }

//     }
//   cout<<tt[0]<< " " <<tt[1];

    
return 0;

}