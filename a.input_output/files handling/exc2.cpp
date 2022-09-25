#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    string s;
    getline(cin, s);
    // 1,2,5,7,15,88,72;-1,3,7,-20,-18
    char arr1[1000];
    int i;
    for (i = 0; i < s.size(); i++)
    {
        arr1[i] = s[i];
    }
    arr1[i] = '\0';
    char *ptr = strtok(arr1, ";");
    string s1;
    s1 = ptr;
    ptr = strtok(NULL, ";");
    string s2;
    s2 = ptr;

    char arr2[1000];

    for (i = 0; i < s1.size(); i++)
    {
        arr2[i] = s1[i];
    }
    arr2[i] = '\n';

    char *ptr2 = strtok(arr2, ",");
    while (ptr2 != NULL)
    {
        stringstream sso;
        sso << ptr2;
        int k;
        sso >> k;
        v1.push_back(k);
        ptr2 = strtok(NULL, ",");
    }

    char arr3[1000];
    for (i = 0; i < s2.size(); i++)
    {
        arr3[i] = s2[i];
    }
    arr3[i] = '\0';
    char *ptr3 = strtok(arr3, ",");
    while (ptr3 != NULL)
    {
        stringstream sso;
        sso << ptr3;
        int t;
        sso >> t;
        v2.push_back(t);
        ptr3 = strtok(NULL, ",");
    }

    for (auto &item : v1)
    {
        cout << item << " ";
    }
    cout << endl;

    for (auto &item : v2)
    {
        cout << item << " ";
    }

    return 0;
}