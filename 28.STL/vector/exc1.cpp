#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> t;
    int sum;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
        cout << i << " ";
    }
    cout << endl;
    int size = v.size();

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < v.size() - 1; j++)
        {
            // sum = v[j] + v[j + 1];
            // sum + v[i+1];
            // vector<int>t;
            t.push_back(v[j] + v[j + 1]);
            // sum = 0;
        }
        for (int i = 0; i < t.size(); i++)
        {
            cout << t[i] << " ";
        }
        cout << endl;
        // t.clear();
        v = t;
        t.clear();
    }

    // for (int i = 0; i < t; i++)
    // {
    //     cout << t[i] << endl;
    // }

    return 0;
}