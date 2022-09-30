#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>

int linear_search(int *arr, int n, int t)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {

            return i;
        }
    }

    return -1;
}

using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int t = 9;

    cout << linear_search(arr, n, t);

    return 0;
}