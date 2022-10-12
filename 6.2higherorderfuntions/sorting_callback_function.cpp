#include<bits/stdc++.h>
using namespace std;


bool comp(int a1, int a2){
    return a1>a2;
}
int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    int n;
    cin>>n;
    vector<int>mynum;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        mynum.push_back(num);
    }
    sort(mynum.begin(), mynum.end(),comp);

    for(auto &item: mynum){
        cout<<item<<" ";
    }

    cout<<endl;
    return 0;
}