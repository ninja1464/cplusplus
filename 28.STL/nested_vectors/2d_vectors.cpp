// making 2d vector

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
    vector<vector<int>> dv;
    // creation of 2d vector
    for (int i = 0; i < 7; i++)
    {
        vector<int> sv;
        for (int j = 0; j < 5; j++)
        {
            sv.push_back(j);
        }
        dv.push_back(sv);
    }

    // accesing 2d array

    for (int i = 0; i < dv.size(); i++)
    {

        for (int j = 0; j < dv[i].size(); j++)
        {
            cout << dv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}