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

long sum_it(int arr[], int n)
{

    long sum = long(0);

    for (int i = 0; i < n; i++)
    {
        sum = sum + long(arr[i]);
    }

    return sum;
}

long sum_rec(int arr[], int n)
{

    if (n == 1)
    {
        return arr[0];
    }

    return arr[n - 1] + sum_rec(arr, n - 1);
}
int main()
{
    int arr[1000000];

    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << sum_it(arr, size);

    cout << sum_rec(arr, size);

    return 0;
}