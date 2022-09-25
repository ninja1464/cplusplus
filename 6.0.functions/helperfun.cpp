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
void reverse(string &s1, int s, int e)
{

    while (s <= e)
    {
        swap(s1[s++], s1[e--]);
        //    s++;
        //    e--;
    }
}

void reverse(string &s1)
{
    int s = 0;
    int e = s1.size() - 1;

    reverse(s1, s, e);
}

int main()
{
    string s = "bunty";
    string &mystr = s;

    reverse(mystr);

    cout << mystr << endl;

    return 0;
}