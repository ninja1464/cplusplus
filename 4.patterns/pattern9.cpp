#include <iostream>
#include <vector>
using namespace std;
//takleef hui likhne mai jyada nhi thi
int main()
{
    int n;
    cin >> n;
    int p = 'A' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(p++) << " ";
        }
        cout << endl;
        p = 'A' + n - 1 - i;
        // cout << char(p) << endl;
    }
    return 0;
}

// 5

// E
// DE
// CDE
// BCDE
// ABCDE