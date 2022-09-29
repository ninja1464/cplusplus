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

int glo_arr[10];//default value of global allocation is always 0;
int main()
{
    int loc_arr[10];///default value of local allocation in funtion is grabage;

    for (auto &item : loc_arr)
    {
        cout << item << " ";
    }
    cout << endl;

    for (auto &item : glo_arr)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}