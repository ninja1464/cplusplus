// make a  vector of pairs store length and breadth of rectangles and return a vector with area of rectangle
#include <iostream>
#include <vector>
using namespace std;
vector<int> area(vector<pair<int, int>> &rec)
{
    vector<int> ans;
    for (int i = 0; i < rec.size(); i++)
    {
        ans.push_back(rec[i].first * rec[i].second);
    }
    return ans;
}

int main()
{
    vector<pair<int, int>> rec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pair<int, int> p(a, b);
        rec.push_back(p);
    }
    vector<int> a = area(rec);
    for (auto &item : a)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}