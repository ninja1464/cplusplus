#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a;
        }
        cout << endl;
        a++;
    }
    return 0;
}


// 4
// 1
// 22
// 333
// 4444