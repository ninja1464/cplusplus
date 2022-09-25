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
void print(char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        cout << a[i++] << " ";
    }
}

int main()
{
    char arr[] = "sachin";

    print(arr);

    return 0;
}