#include <iostream>
#include <vector>
using namespace std;
// fizz buzz  https://leetcode.com/problems/fizz-buzz/
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            cout << i << "->"
                 << " "
                 << "buzz" << endl;
        }
        else
        {
            cout << i << "->"
                 << " "
                 << "fizz" << endl;
        }
    }
    return 0;
}