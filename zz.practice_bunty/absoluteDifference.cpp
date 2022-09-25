#include <iostream>
#define MAX 100
#include <vector>
using namespace std; 
// int diagonalDifference(int srr[][3],int t){
//     //int srr[t][t];
//     int sum=0;int sum1=0;
//     for(int a = 0; a < t; a++)
//     {
//         for(int b=t;b>0;b--){
//             //int sum1=0;
//             cin>>srr[a][b-1];
//             sum1=srr[a][b-1]+sum1;
//         }

//        cin>>srr[a][a];
//        sum=srr[a][a]+sum;

//     }
//     return abs(sum1-sum);
    

    
//}

int main()
{
    int n;int sum=0;int sum1=0;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
                      
        }
        
    }
    
    for(int a = 0; a < n; a++)
    {
        for(int b=0;b<n;b++){
            //int sum1=0;
            //cin>>arr[a][b-
       if(a==b){
       sum=arr[a][b]+sum;
        }
        if(b==n-a-1){
            sum1=arr[a][b]+sum1;
        }
        }
    }

    cout<<abs(sum1-sum);
    
    //cout<<diagonalDifference(arr,n);

return 0;
}