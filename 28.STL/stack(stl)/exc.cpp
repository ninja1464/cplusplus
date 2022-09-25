#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <stack>
#include <queue>
#include <cstring>
#include <sstream>
//
using namespace std;
int main()
{

    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.emplace(8);
    s.push(9);
    s.push(10);

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    stack<int> s1;
    s1.push(2);
    s1.push(3);
    s1.push(98);
    s1.push(2);

    swap(s, s1);

    cout << "printing s" << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";

        s.pop();
    }
    cout << endl;

    cout << "printing s1" << endl;

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    return 0;
}

//push() , pop(), swap(),emplace(),empty(),size(),top()
//push vs emplace:
//in emplace funtion we call by refrence hence save memory while in push() memoery is created hence it is not memory efficient