// make a function which returns  two value

#include <iostream>
#include <vector>
using namespace std;
pair<int, int> myfun(int a, int b)
{
    int sum, diff;
    sum = a + b;
    diff = a - b;
    pair<int, int> ans(sum, diff);
    return ans;
}
int main()
{
    pair<int, int> p = myfun(5, 6);
    cout << p.first << " " << p.second;
    cout << endl;

    return 0;
}