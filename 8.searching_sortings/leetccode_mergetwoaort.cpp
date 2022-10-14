#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v1, vector<int> &v2)
{
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        if (v1[i] == 0)
        {
            v1.pop_back();
        }else{
            break;
        }
    }
    for (int i = v2.size() - 1; i >= 0; i--)
    {
        if (v2[i] == 0)
        {
            v2.pop_back();
        }else{
            break;
        }
    }
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
    v1.clear();

    for (int i = 0; i < v3.size(); i++)
    {
        v1.push_back(v3[i]);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v1 = {1, 2, 3, 0, 0, 0};

    vector<int> v2 = {2, 5, 6};

    merge(v1, v2);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}