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
    int arr[32];
    int t = 31;
    int count = 0;
    while (n > 1)
    {
        arr[t] = n % 2;

        n = n / 2;
        t--;
        count++;
    }

    for (int i = 0; i < 32 - count; i++)
    {
        arr[i] = 0;
    }

    for (int i = 31; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < 32; i++)
    {
        cout << arr[i];
    }

    return 0;
}