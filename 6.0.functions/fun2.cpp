#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>

using namespace std; // funtions are used for code reuseabilty
int arr_sum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{

    int a[] = {1, 2, 3, 4, 5};

    cout << a << endl;

    cout << arr_sum(a, sizeof(a) / sizeof(int));

    return 0;
}