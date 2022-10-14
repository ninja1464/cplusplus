#include <bits/stdc++.h>
using namespace std;
//complexity is N*logN

void print(vector<int> &t, int i)
{
    for (int j = 0; j < i; j++)
    {
        cout << t[j] << " ";
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v1;
    for (int i = 0; i < 7; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }
    int i = 0;
    for (i = 0; i < v1.size(); i++)
    {
        print(v1, i);
        for (int j = i; j >= 1; j--)
        {
            if (v1[j] < v1[j - 1])
            {
                swap(v1[j], v1[j - 1]);
            }
        }
    }
    print(v1, i);

    return 0;
}