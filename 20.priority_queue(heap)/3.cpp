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

class compare
{
public:
    bool operator()(pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second == p2.second)
        {
            return p2.second; // bcuz we know priority order works in oppposite ordder of return statement should be reversed
        }
        return p1.second > p2.second; // if we pass incresing order then priority queue get decresing order and vice versa
    }
};
/*
sachin 8
bunty 8
khushi 7
vishal 5
prince 10
*/
int main()
{

    int n = 5;
    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> depo_q;
    for (int i = 0; i < n; i++)
    {
        string name;
        int arriving_time;
        cin >> name;
        cin >> arriving_time;
        pair<string, int> p(name, arriving_time);
        depo_q.push(p);
    }
    cout << endl
         << endl;

    while (depo_q.size() > 0)
    {
        cout << depo_q.top().first << " " << depo_q.top().second << endl;

        depo_q.pop();
    }
    return 0;
}