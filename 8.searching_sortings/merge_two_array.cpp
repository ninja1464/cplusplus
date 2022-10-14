#include <bits/stdc++.h>
using namespace std;
//complexitiiy is order of O(n);
vector<int> mergeTwoSort(vector<int> v1, vector<int> v2)
{
    vector<int> v3;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            v3.push_back(v1[i++]);
        }
        else
        {
            v3.push_back(v2[j++]);
        }
    }

    if (i != v1.size())
    {
        while (i < v1.size())
        {
            v3.push_back(v1[i++]);
        }
    }

    if (j != v2.size())
    {
        while (j < v2.size())
        {
            v3.push_back(v2[j++]);
        }
    }

    return v3;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v1 = {1, 10, 12, 13, 15};
    vector<int> v2 = {2, 3, 7, 10, 12, 15, 24, 25, 30};

    vector<int> ans = mergeTwoSort(v1, v2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}