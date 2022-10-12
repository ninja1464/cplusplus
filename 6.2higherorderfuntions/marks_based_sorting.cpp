#include<bits/stdc++.h>
using namespace std;




bool comp(pair<string,int>p1,pair<string,int>p2){
    return p1.second>p2.second;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

   
    int n;
    cin>>n;
    vector<pair<string,int>>students_data;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int marks;
        cin>>marks;

        pair<string,int>markspair(name,marks);
        students_data.push_back(markspair);
        


    }

    sort(students_data.begin(), students_data.end(), comp);


    for(auto &item:students_data){
        cout<<item.first<<" "<<item.second<<endl;
    }


    return 0;
}

// 10
// sachin 100
// bunty 80
// alok 90
// vishal 101
// khushi 100
// tinku 90
// pinku 220
// divanshi 160
// sneha 90
// rachna 86

