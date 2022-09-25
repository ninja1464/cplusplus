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

int sum(int a, int b)
{
    return a + b;
}

template <class T, class P>
void print(T s, P r)
{

    cout << s << " " << r << endl;
}

int *create()
{

    int *a = new int(5);

    return a;
}
int main()
{

    cout << sum(5, 5) << endl;

    print("bunty", 5);
    print(5, 5);

    int *myint = create();
    cout << *myint << endl;
    cout << myint;
    return 0;
}

// returning functions , void functions , generic or template functions,pointer returning funtions;