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
            p++;
        }
        cout << endl;
    }
    return 0;
}

// 4
// A 
// B C 
// D E F 
// G H I J 