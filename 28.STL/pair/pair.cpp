//#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;

// template< class P,class Q>
// class mypair{
//     public:
//         P first;
//         Q second;


// };


int main(){
    // first method to create and put values in it
   pair<int ,int>p1;
   p1.first=10;
   p1.second=20; 
    pair<int ,int>p0(0,0);
    // fetch
   cout<<p1.first<< " " <<p1.second<<endl;

   // constructor  with argument
   pair<int ,char>p2(55,'B');
    cout<<p2.first<< " " <<p2.second<<endl;

    //using function
    pair<int ,string>p3=make_pair(55,"Sachin");
    cout<<p3.first<< " " <<p3.second<<endl;


    //constr2 // used to create a copy
    pair<int ,string>p4(p3);
    cout<<p4.first<< " " <<p4.second<<endl;

    swap(p1,p0);
    cout<<p1.first<< " " <<p1.second<<endl;// 0 0
    cout<<p0.first<< " " <<p0.second<<endl;//10 20
// one more way to create pair
    pair<int,int>sachin={1,2};

  return 0;
}
