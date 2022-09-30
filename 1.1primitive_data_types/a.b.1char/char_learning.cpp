#include <iostream>
#include <vector>
using namespace std;
// char addresses are not accessible but when we print address then it prints the value present at the address
int main()
{
    char s = 'a';
    char *ptr = &s;
    cout << ptr << endl;

    char *ptr2;
    cout << ptr2 << endl;
    return 0;
}