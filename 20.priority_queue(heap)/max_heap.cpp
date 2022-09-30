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

void print_prique(priority_queue<int, vector<int>> pq)
{
    while (pq.size() > 0)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
int main()
{
   

    int arr[] = {7, 8, 4, 10, 12, 2, 7, 9, 15, 0};

    priority_queue<int, vector<int>> pq;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        pq.push(arr[i]);
        cout << "we pushed " << arr[i] << " and the state of pq is ";
        print_prique(pq);
    }

    // by dafault its a max heap(max_priority_queue)
    return 0;
}