// three types of map:ordered map,unordered map, multi map;
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <iterator>
using namespace std;
// at,erase,mp[],count,size,insert
int main()
{
    unordered_map<int, int> mp;
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 8, 9, 10, 3, 4, 1};

    for (int i = 0; i < 13; i++)
    {
        mp[arr[i]]++;
    }

    if (mp.count(5) == 1)
    {
        mp.erase(5);
    }

    pair<int, int> p(5, 2);
    mp.insert(p);
    mp[2] = 7;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << mp.at(4) << endl;
    if (mp.count(15) == 1)
    {
        cout << mp.at(15) << endl;
    }

    cout << mp.size() << endl;

    // cout << mp.at(15);
    return 0;
}
/*important funtions of maps:
mp.at(key) :it will give value corresoonding to the key if key is not there we'll get errror.
mp.count(key):if it is present it will return 1 or it will return 0 if key is not there
second way to insert in map:
pair<int,int>p(a,b)
mp.insert()
mp[2]=7
*/