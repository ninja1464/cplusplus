#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(p) << " ";
        }
        cout << endl;
        p++;
    }
    return 0;
}

// 5
// A
// BB
// CCC
// DDDD
// EEEEEE