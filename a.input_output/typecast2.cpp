#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    vector<string> str;
    vector<int> ans;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    for (auto item : str)
    {
        stringstream sso;
        sso << item;
        int temp;
        sso >> temp;
        ans.push_back(temp);
    }

    for (auto item : ans)
    {
        cout << item << " ";
    }

    return 0;
}