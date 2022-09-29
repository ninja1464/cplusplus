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

// void reciever(int *arr, int n){

//     cout << sizeof(arr);
// }

void reciever(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // cout << sizeof(arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl; // name of the array contains the address of the first element of the array
    // when we add 1 in address it starts pointing to next element's address
    cout << &arr[0] << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << (arr + i) << " " << *(arr + i) << endl;
    }

    cout << sizeof(arr);
    cout << endl;
    reciever(arr, sizeof(arr) / sizeof(int));
    return 0;
}