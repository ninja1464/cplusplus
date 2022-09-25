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
int main()
{
    vector<pair<int, int>> chair;

    for (int i = 0; i < 6; i++)
    {
        int first, second;
        cin >> first >> second;
        pair<int, int> p(first, second);
        chair.push_back(p);
    }
    cout<<endl;

    for (int i = 0; i < 6; i++)
    {
        cout << chair[i].first << " " << chair[i].second << endl;
    }

    return 0;
}