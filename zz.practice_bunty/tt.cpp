#include <iostream>
#include <vector>
#include<iomanip>
#include<cmath>
using namespace std; 
void plusMinus(int ar[],int n){
    double cnt1=0;double cnt2=0;double cnt3=0;
    for(int i=0;i<n;i++){
            if(ar[i]>0){
        cnt1++;
        //cnt1/n;
}else if(ar[i]<0){
    cnt2++;
   // cnt2/n;
}else{
    cnt3++;
    //cnt3/n;
}
        
}   
cout<<fixed << setprecision(6) << cnt1/n<<endl;
cout<<fixed << setprecision(6) << cnt2/n<<endl;
cout<<fixed << setprecision(6) << cnt3/n<<endl;

    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    plusMinus(arr,n);

return 0;
}

