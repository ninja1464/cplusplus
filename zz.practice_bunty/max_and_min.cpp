
#include <iostream>
#include <vector>
typedef long long LL;
using namespace std; 
void miniMaxSum(int ar[5]){
int sum=0;int arr[5];int srr[5];
for(int j=0;j<5;j++){

for(int i=0;i<4;i++){
    sum=ar[(i+j)%5]+sum;
}
   arr[j]=sum;
   srr[j]=sum;
  //cout<<sum<<endl;
  sum=0;
}
for(int i=0;i<5;i++){//this will give the greater one among them
  if(arr[0]>arr[i+1]){
    for(int j=i;j<5-2-i;j++){
arr[j+1]=arr[j+2];
}
  }else{
    for(int t=0;i<5-1-i;i++){
      arr[t]=arr[t+1];
    }

  }

}
//cout<<arr[0]<<" ";

for(int i=0;i<5;i++){//the smallest one
  if(srr[0]<srr[i+1]){
    for(int j=i;j<5-2-i;j++){
srr[j+1]=srr[j+2];
}
  }else{
    for(int t=0;i<5-1-i;i++){
      srr[t]=srr[t+1];
    }

  }

}
cout<<srr[0]<<" "<<arr[0];
}
int main()
{
     int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    miniMaxSum(arr);

return 0;
}