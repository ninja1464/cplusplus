// CPP program to illustrate
// gcd function of C++ STL
#include <iostream>
#include <algorithm>
#include <cmath>
// #include<numeric> for C++17

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    // cout << sizeof(arr) / 4;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
