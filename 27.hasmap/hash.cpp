#include <iostream>
#include <vector>
using namespace std;
int myhash(string s)
{
    // sum of all ascii values of characteres of strings
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum = sum + s[i];
    }
    return sum;
}
int main()
{
    cout << myhash("bunty");
    return 0;
}