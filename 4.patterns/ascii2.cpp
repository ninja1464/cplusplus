#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int i = 'a'; i < 'a' + 26; i++)
    {
        cout << char(i) << char(32);
    }
    cout << endl;
    return 0;
}