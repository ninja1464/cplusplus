#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <queue>
#include <cstring>
#include <sstream>
#include <cstdio>
#include <stdio.h>

using namespace std;
int main()
{

    char str[1000];

    char input;
    input = getchar();

    int i = 0;
    while (input != '$')
    {
        str[i] = input;
        i++;
        input = getchar();
    }
    str[i] = '\0';

    char *ptr = strtok(str, " \n");
    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = strtok(NULL, " \n");
    }
    // cout << str;
    return 0;
}
