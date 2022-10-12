#include<bits/stdc++.h>
using namespace std;


vector<double>calculate(vector<int>radius,double (*logic)(int r))
{
    vector<double>ans;
    for(auto &item:radius){
        ans.push_back(logic(item));
    }

    return ans;

}

double area(int r){
    return 4*3.14*(r*r); 
}

double volume(int r){
    return (4/3.0)*3.14159*(r*r*r);
}


int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    vector<int> radius{5,4,10,2};
    vector<double>myans=calculate(radius,volume);

    for(auto &item:myans){
        cout<<item<<" ";
    }
    cout<<endl;



    return 0;
}