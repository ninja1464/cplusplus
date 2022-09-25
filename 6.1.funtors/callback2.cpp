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

bool compare(pair<string, int> p1, pair<string, int> p2)
{
    // return  p1.second>p2.second;// decresing order
    return p1.second < p2.second; // increasing order
}

int main()
{
    vector<pair<string, int>> students;
    for (int i = 0; i < 5; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        pair<string, int> s(name, marks);
        students.push_back(s);
    }
    // khushi 25 sachin 75 bunty 100 vishal 60  prince 40
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].first << " " << students[i].second << endl;
    }
    cout << endl;
    sort(students.begin(), students.end(), compare);

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].first << " " << students[i].second << endl;
    }
    return 0;
}