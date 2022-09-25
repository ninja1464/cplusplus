#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> &v)
{
    vector<int> v2;
    for (int i = 0; i < v.size() - 1; i++)
    {
        v2.push_back(v[i] + v[i + 1]);
    }
    return v2;
}
int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
        cout << v[i - 1] << " ";
    }
    cout << endl;

    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        vector<int> k = print(v);
        v.clear();
        for (int i = 0; i < k.size(); i++)
        {
            v.push_back(k[i]);
            cout << k[i] << " ";
        }
        cout << endl;
    }
    return 0;
}