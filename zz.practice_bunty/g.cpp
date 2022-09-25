#include <iostream>
#define MAX 100
#include <vector>
using namespace std; 
int diagonalDifference(int arr[][MAX],int t){
    //int srr[t][t];
    int sum=0;int sum1=0;
    for(int a = 0; a < t; a++)
    {
        for(int b=t;b>0;b--){
            //int sum1=0;
            cin>>arr[a][b-1];
            sum1=arr[a][b-1]+sum1;
        }

       cin>>arr[a][a];
       sum=arr[a][a]+sum;

    }
    return abs(sum1-sum);
    

    
}

int main()
{
    int n;
    cin>>n;
    int arr[][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
                      
        }
        
    }
    
    cout<<diagonalDifference(arr,n);

return 0;
}