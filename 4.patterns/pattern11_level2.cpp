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

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int t = 1; t <= i; t++)
        {
            cout << t;
        }
        cout << endl;
    }

    return 0;
}

/*
5
     1
    12
   123
  1234
 12345
 */