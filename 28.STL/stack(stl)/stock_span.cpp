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

    int a[] = {60, 70, 80, 100, 90, 75, 80, 120};
    vector<int> v;
    v.push_back(1);
    for (int i = 1; i < 8; i++)
    {
        int count = 1;
        for (int j = i - 1; j >= 0 && a[j] < a[i]; j--)
        {
            count++;
        }
        v.push_back(count);
    }
    for (auto &item : v)
    {
        cout << item << endl;
    }

    // int arr[] = {60, 70, 80, 100, 90, 75, 80, 120};

    // // output:1 2 3 4 1 1 2 8
    // vector<int> span;
    // span.push_back(1);
    // int count = 1;
    // int count1;

    // for (int i = 1; i < 8; i++)
    // {
    //     for (int j = i; j < i + 1; j++)
    //     {
    //         if (arr[j] <= arr[j + 1])
    //         {
    //             count++;
    //             span.push_back(count);
    //         }
    //         else
    //         {
    //             count = 1;
    //             span.push_back(count);
    //             count++;
    //         }
    //     }
    // }

    // for (auto &item : span)
    // {
    //     cout << item << " ";
    // }
    // cout << endl;
    // return 0;
}