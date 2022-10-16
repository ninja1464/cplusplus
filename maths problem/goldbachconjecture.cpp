#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int count=0;
    int n;
    cin>>n;
    cout<<n<<"->";
    while(n!=1){
        
        if(n%2==0){
            n=n/2;
        }else{
            n=3*n + 1;
        }
        count++;
        cout<<n<<"->";
    }

    cout<<endl<<"no of steps :";
    cout<<count<<endl;

    return 0;
}