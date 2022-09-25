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

bool prime(int n)
{
    if (n == 1 || n == 0)//edge case handling
    {
        return false;
    }
    int isprime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}
// using namespace std;
int main()
{
    // int n;
    // cin >> n;
    vector<int> primes;

    for (int i = 0; primes.size() <= 100; i++)
    {
        if (prime(i) == true)
        {
            primes.push_back(i);
        }
    }

    for (auto &item : primes)
    {
        cout << item << " ";
    }
    // cout << prime(n);
    return 0;
}