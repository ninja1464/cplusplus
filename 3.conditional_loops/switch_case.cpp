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
int main()
{
    int day;
    cin >> day;
    int k = 1;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;

        switch (k)
        {
        case 1:
            cout << "switch ke andr switch";
            break;
        default:
            cout << "i am andr ke andr ka switch";
        }
        break;

    case 2:
        cout << "tuesday" << endl;
        break;
    default:
        cout << "bhang bhosda";
    }
    return 0;
}