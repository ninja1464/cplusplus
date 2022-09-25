#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>

using namespace std;

// vector<int> area(vector<int>radius){
//     vector<int>area;
//     for(int i=0;i<radius.size();i++){
//         area.push_back(3.141*radius[i]*radius[i]);
//     }
//     return area;
// }
// vector<int> circum(vector<int>radius){
//     vector<int>circum;
//     for(int i=0;i<radius.size();i++){
//         circum.push_back(2*3.14*radius[i]);
//     }
//     return circum;
// }
// vector<int> diameter(vector<int>radius){
//     vector<int>diameter;
//     for(int i=0;i<radius.size();i++){
//         diameter.push_back(2*radius[i]);
//     }
//     return diameter;
// }

int diameter(int r)
{
    return 2 * r;
}

int area(int r)
{
    return 3.14 * r * r;
}

int circum(int r)
{
    return 2 * 3.14 * r;
}

vector<int> calulator(vector<int> &radius, int (*logic)(int))
{
    vector<int> ans;
    for (int i = 0; i < radius.size(); i++)
    {
        ans.push_back(logic(radius[i]));
    }
    return ans;
}

int main()
{
    vector<int> arr;
    for (int i = 30; i < 40; i++)
    {
        arr.push_back(i + 1);
    }

    int (*logic)(int);
    logic = diameter;

    vector<int> ans = calulator(arr, logic);

    for (auto &item : ans)
    {
        cout << item << " ";
    }

    return 0;
}

// funtors differnt names:
// callback function
// funtors
// funtion objects
