//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;
int main()
{
    // making vector
    vector<int> v;          // empty vector
    vector<int> v1(10);     // 10 size vector by deaulat all values will be 0
    vector<int> v2(10, -1); // 10 size arry with all defalt values as -1
    //    vector<int>v3{1,2,3,4,5,6,7};  //giving error this is wrong way

    // vector iteration
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl; // using for loop

    // fast iteration
    for (int &i : v2)
    {
        cout << i << " ";
    }

    // iterator
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *(it) << " ";
    }

    // vector methods
    vector<int> bunty;
    bunty.push_back(10);
    bunty.push_back(20);
    bunty.pop_back();
    bunty.size();
    bunty[0];
    bunty.at(0); // it will give error if we try to access out of index
    // bunty.insert(0,50); // it is giving error lets see
    bunty.clear(); // clear verctor
    bunty.back();

    vector<int> sachin;
    for (int i = 10; i >= 0; i--)
    {
        sachin.push_back(i);
    }
    cout << endl;
    sort(sachin.begin(), sachin.end());
    for (int i = 0; i < sachin.size(); i++)
    {
        cout << sachin.at(i) << " ";
    }
    reverse(sachin.begin(), sachin.end());
    cout << endl;
    cout << accumulate(sachin.begin(), sachin.end(), 0);
    cout << *(max_element(sachin.begin(), sachin.end()));
    cout << endl;
    cout << *(max_element(sachin.begin(), sachin.end()));
    cout << endl;
    cout << *(min_element(sachin.begin(), sachin.end()));

    cout << endl;
    //    vector<vector<int>>v4;

    return 0;
}