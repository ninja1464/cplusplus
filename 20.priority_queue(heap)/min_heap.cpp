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

void print_min_pq(priority_queue<int, vector<int>, greater<int>> min_pq)
{
    while (min_pq.size() > 0)
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;
}
int main()
{

    int arr[] = {7, 8, 4, 10, 12, 2, 7, 9, 15, 0};
    priority_queue<int, vector<int>, greater<int>> min_pq; // when we paas greater<int> then it makes a  min heap or min priority queue

    for (auto &item : arr)
    {
        min_pq.push(item);
        cout << "we pushesd " << item << " and the state of min_pq is ";
        print_min_pq(min_pq);
    }
    return 0;
}