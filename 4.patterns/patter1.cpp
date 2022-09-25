#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     // cout << "bunty";
    //     // for (int j = 1; j <= i; j++)
    //     // {
    //     //     cout << j << " ";
    //     // }
    //     cout << endl;
    // }
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        // cout << "bunty";
        for (int j = 1; j <= i; j++)
        {
            cout << b++ << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
1
1 2
1 2 3
1 2 3 4


1
2 3
4 5 6

*/