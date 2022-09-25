// print unique numbers of an array

#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec(10, -1);

    for (auto &item : vec)
    {
        int k;
        cin >> k;
        item = k;
    }
    unordered_map<int, bool> mp;
    for (auto &item : vec)
    {
        pair<int, bool> p(item, true);
        mp.insert(p);
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " ;
        }
    cout << endl;

    return 0;
}