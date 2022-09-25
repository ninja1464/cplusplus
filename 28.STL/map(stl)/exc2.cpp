#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v1(5);
    vector<int> v2(10);
    for (int i = 0; i < 5; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> v2[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < v1.size(); i++)
    {
        mp[v1[i]]++;
    }
    unordered_map<int, int> mp2;

    for (int i = 0; i < v2.size(); i++)
    {
        mp2[v2[i]]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        if (mp2.count(it->first) == 1)
        {
            int times = min(it->second, mp2.at(it->first));
            for (int i = 0; i < times; i++)
            {
                cout << it->first << " ";
            }
        }
    }

    return 0;
}