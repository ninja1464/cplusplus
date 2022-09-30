#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

    ifstream in;

    in.open("input.txt");
    while (in.eof() != true)
    {
        string s;
        getline(in, s);
        cout << s << endl;
    }

    in.close();

    return 0;
}