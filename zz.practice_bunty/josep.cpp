#include <iostream>
#include <vector>
using namespace std; 
void josephus(int n,int k){
int arr[n];
for(int i = 0; i<n; i++)
{
    arr[i]=1;
    cout<<arr[i]<<endl;
}
int d=0;int j=0;
int t=0;

 while(j<n){
//  if(d%n==d || d%n==d-n){
    if(d<=n){
     d=(d+k)-1;
     arr[d%n]=0;
       }else{
         d=(d+2*k)-1;
         arr[(d+1)%n]=0;
         
        //  d=d+(2*k);
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     d++;

 //}
     j++;

 }
 //j++;


// i=i+k
// if(i%n==i){
//     i=(i+k)-1;
//     arr[i]=0;
//     i++;
// }

// for(int i=0;i<n-1;i++)
// {
//     cout<<arr[i]<<" ";
   

// }

//cout<<arr[d];
}
int main()
{
    int n,k;
    cin>>n>>k;
    josephus(n,k);
    
return 0;
}