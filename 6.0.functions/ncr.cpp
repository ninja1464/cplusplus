#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>

using namespace std;
int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int ncr(int n, int r)
{
    return fac(n) / (fac(n - r) * fac(r));
}
int main()

{

    cout << ncr(12, 4) << endl;

    return 0;
}