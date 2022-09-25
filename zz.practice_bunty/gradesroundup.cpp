#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int n;
    cin>>n;
    int grades[n];//int new1[n];
    for(int i=0;i<n;i++){
        cin>>grades[i];
    }
    cout<<endl;
    for(int  j=0;j<n;j++){
    if(grades[j]<38){
    cout<<grades[j]<<endl;
    }else if((grades[j]+1)%5==0){
     grades[j]=grades[j]+1;
     cout<<grades[j]<<endl;
    }else if((grades[j]+2)%5==0){
     grades[j]=grades[j]+2;
     cout<<grades[j]<<endl;
    }else{
        cout<<grades[j]<<endl;
    }
        
    }    
return 0;
}

