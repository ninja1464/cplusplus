#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string d = "bunty";
    string *ptr = &d;
    cout << ptr << endl;
    return 0;
}