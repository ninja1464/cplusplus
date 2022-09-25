// input file name exinput.txt

// take input of an array from a file where we will just put elements of an array seperated by commas but we will not put size of array.
// output: we need to print sorted array and size of array in a file in exoutput.txt

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    ifstream in;
    in.open("exinput.txt");
    string s;
    getline(in, s);
    cout << s << endl;

    char ss[1000];
    int i;
    for (i = 0; i < s.size(); i++)
    {
        ss[i] = s[i];
    }
    ss[i] = '\0';

    char *ptr = strtok(ss, ",");
    vector<string> sr;
    while (ptr != NULL)
    {
        sr.push_back(ptr);
        ptr = strtok(NULL, ",");
    }

    vector<int> nums;
    for (auto &item : sr)
    {
        stringstream sso;
        sso << item;
        int k;
        sso >> k;
        nums.push_back(k);
    }
    sort(nums.begin(), nums.end());

    ofstream out;
    string tt;
    out.open("exoutput");
    for (auto &item : nums)
    {
        out << item << " ";
    }

    cout << endl;

    in.close();
    out.close();

    return 0;
}