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
    char **arr[100];

    for (int i = 0; i < 3; i++)
    {
        char *a;
        char str[1000];
        char mychar = getchar();
        int j;
        for (j = 0; mychar != '\n'; j++)
        {
            str[j] = mychar;
            mychar = getchar();
        }
        str[j] = '\0';
        // cout << str << endl;
        a = str;

        arr[i] = a;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " << endl;
    }
    // cout << arr[0];
    return 0;
}