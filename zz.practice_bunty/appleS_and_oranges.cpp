#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;

    int apples[m],oranges[n];//int conunt=0;
    for(int i=0;i<m;i++){
        cin>>apples[i];
    }
    //cout<<endl;

    int cnt=0;
    for(int i=0;i<m;i++){
     apples[i]=apples[i]+a;
     if(apples[i]>=s && apples[i]<=t){
         cnt++;
     }
    }

    for(int i=0;i<n;i++){
        cin>>oranges[i];
    }

    int cnt1=0;
    for(int i=0;i<n;i++){
     oranges[i]=oranges[i]+b;
     if(oranges[i]>=s && oranges[i]<=t){
         cnt1++;
     }
    }


    cout<<cnt<<endl;
    cout<<cnt1<<endl;
    


return 0;
}