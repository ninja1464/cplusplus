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

    int n;
    cin >> n;
    int k = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j >= 0; j--)
        {
            cout << k;
        }
        cout << endl;
        k--;
    }
    return 0;
}