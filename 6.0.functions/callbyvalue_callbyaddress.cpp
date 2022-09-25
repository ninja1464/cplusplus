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
// recieve by value here memory is created
int sum(int a, int b)
{
    return a + b;
}
// recieve by refrence niether memory is created for value nor for address,only new name is guven to original values
int sum1(int &a1, int &b1)
{
    a1 = 5;
    return a1 + b1;
}

// recieve by address here memory is created for addresses
int sum2(int *a, int *b)
{
    *a = 9;

    return *a + *b;
}
int main()
{

    int a, b;
    a = 10;
    b = 10;
    cout << sum(a, b) << endl;
    cout << sum1(a, b) << endl;
    cout << sum2(&a, &b) << endl;

    cout << a << " " << b << endl;

    return 0;
}