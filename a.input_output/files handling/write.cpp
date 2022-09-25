#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    string s;
    getline(cin, s, '$');
    out.open("output.txt");
    out << s;
    out.close();
    return 0;
}