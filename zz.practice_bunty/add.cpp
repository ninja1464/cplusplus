#include <iostream>
#include <vector>
using namespace std;

int add(int n)
{
    if (n <= 0)
    {
        return n;
    }
    int sum = add(n - 1) + n;

    return sum;
}
int main()
{
    int n;
    cin >> n;

    cout << add(n) << endl;

    return 0;
}