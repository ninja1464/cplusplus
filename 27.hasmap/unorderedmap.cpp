#include <iostream>
#include <vector>
#include "bits.h"
using namespace std;

int main()
{
    
    unordered_map<char, int> mmap;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        mmap[s[i]]++;
    }
    for (auto it = mmap.begin(); it != mmap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}