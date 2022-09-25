#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>

using namespace std;
void stackreverse(stack<int> &so)
{
    stack<int> s1;
    stack<int> s2;

    while (!so.empty())
    {
        s1.push(so.top());
        so.pop();
    }

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    while (!s2.empty())
    {
        so.push(s2.top());
        s2.pop();
    }
}

int main()
{
    stack<int> so;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        so.push(data);
    }
    stackreverse(so);
    while (!so.empty())
    {
        cout << so.top() << " ";
        so.pop();
    }
    return 0;
}