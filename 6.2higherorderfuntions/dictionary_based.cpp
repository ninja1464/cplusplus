#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2)
{
    int min_string_size = min(p1.first.size(), p2.first.size());
    int i = 0;
    for (i = 0; i < min_string_size; i++)
    {
        if (p1.first[i] == p2.first[i])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return p1.first[i - 1] < p2.first[i - 1];
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<pair<string, int>> names;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        pair<string, int> p(name, i);
        names.push_back(p);
    }

    sort(names.begin(), names.end(), comp);

    for (int i = 0; i < n; i++)
    {
        cout << names[i].first << " " << names[i].second << endl;
    }
    return 0;
}