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

    int rows;
    cin >> rows;
    vector<vector<int>> dv;
    for (int i = 0; i < rows; i++)
    {
        int col;
        cin >> col;
        vector<int> sv;
        for (int j = 0; j < col; j++)
        {
            sv.push_back(j);
        }

        dv.push_back(sv);
    }

    // printing 2d array

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