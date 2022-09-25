#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> &v)
{
    vector<int> v2;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] + v[i + 1] << " ";
        v2.push_back(v[i] + v[i + 1]);
    }
    cout << endl;
    return v2;
}

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
        cout << i << " ";
    }
    int size = v.size();
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        vector<int> k = print(v);
        v.clear();
        for (int i = 0; i < k.size(); i++)
        {
            v.push_back(k[i]);
        }
    }

    return 0;
}