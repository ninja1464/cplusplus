#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int marks;
    int order;
    student(string name,int marks,int order){
        this->name=name;
        this->marks=marks;
        this->order=order;
    }



};

bool comp(student s1, student s2){
    if(s1.marks==s2.marks){
        return  s1.order < s2.order;
    }
    return s1.marks > s2.marks;
}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    vector<student>data;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int marks;
        cin>>marks;
        int order=i;
        student mystudent(name,marks,order);
        data.push_back(mystudent);
    }

    sort(data.begin(),data.end(),comp);
    
    for(int i=0;i<n;i++){
        cout<<data[i].name<<" "<<data[i].marks<<" "<<data[i].order<<endl;
    }

    return 0;
}