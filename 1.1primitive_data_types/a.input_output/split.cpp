#include <iostream>
#include <vector>
#include <cstring>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{

    char a[10000];
    string s;
    getline(cin, s);
    int i;
    for (i = 0; i < s.size(); i++)
    {
        a[i] = s[i];
    }
    a[i] = '\0';

    char *ptr = strtok(a, " ");

    vector<string> ans;
    while (ptr != NULL)
    {
        // cout << ptr << endl;
        ans.push_back(ptr);
        ptr = strtok(NULL, " ");
    }

    for (auto &item : ans)
    {

        cout << item << endl;
    }
    return 0;
}