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

int binary_search(int *arr, int n, int t)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid] > t)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int binary_recu(int *arr, int n, int t)
{

    int s = 0;
    int e = n - 1;
    if (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }
        if (arr[mid] > t)
        {
            e = mid - 1;
            binary_recu(arr, n, t);
        }
        if (arr[mid] < t)
        {
            s = mid + 1;
            binary_recu(arr, n, t);
        }
    }
    // return -1;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int t = 9;
    sort(arr, arr + n);

    cout << binary_search(arr, n, t) << endl;
    cout << binary_recu(arr, n, 10) << endl;

    return 0;
}