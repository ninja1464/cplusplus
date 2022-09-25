#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"give number of elements ";
    cin>>n;
    // int mat[n][n-1];
    // int count;
    int no_of_slap =0;
    for (int i = 1; i <=n; i++)
    {
       for (int j = 1; j<=n; j++)
       {
           if(i!=j){
               cout<<i<< " slapped " <<j<<endl;
               no_of_slap++;
           }
        
       }

    }
    cout<<endl;
    cout<<no_of_slap<<endl;
    return 0;
}

