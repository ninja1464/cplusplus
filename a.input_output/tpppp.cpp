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

void binarynumber(int n)
{
    int arr[32];
    int i = 0;
    int t;

    while (n > 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
        // int t = n;
    }

    t = i;
    for (int k = t; k < 32; k++)
    {
        arr[k] = 0;
    }

    for (int i = 31; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (int j = 31; j >= 0; j--)
    {
        cout << arr[j];
    }
    cout << endl;
    // for (int j = sizeof(arr) / sizeof(int); j >= 0; j--)
    // {
    //     cout << arr[j];
    // }
}
int main()
{
    int n;
    cin >> n;
    binarynumber(n);

    return 0;
}