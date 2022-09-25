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

    cout << (1 | -2) << endl;
    cout << (1 & -2) << endl;
    cout << (~-2) << endl;
    cout << (1 ^ 1) << endl; // if both are same then ans is false
    cout << (0 ^ 0) << endl;
    cout << (2 ^ -3) << endl;
    cout << (2 << 1) << endl;
    cout << (4 >> 1) << endl;
    cout << (7 >> 1) << endl;

    return 0;
}