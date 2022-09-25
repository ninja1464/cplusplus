#include <iostream>
#include <vector>
using namespace std; 
void fibbb(int fibb[],int n){
    for(int i=2;i<n;i++){
fibb[i] = fibb[i-1] + fibb[i-2];

    }
    for(int i=0;i<n;i++){
        cout<<fibb[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int fibb[100000];
    fibb[0]=0;
    fibb[1]=1;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        //cout<<endl;
    }
    cout<<endl;
    fibbb(fibb,n);
  
return 0;
}