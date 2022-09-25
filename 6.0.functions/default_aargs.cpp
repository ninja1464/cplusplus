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
int sum(int a, int b = 0, int c = 0)
{
    return a + b + c;
}
int main()
{

    cout << sum(1, 2, 3) << endl;
    cout << sum(1, 2) << endl;
    cout << sum(1) << endl;

    return 0;
}


//why to use funtion:
//1) code debugging becomes easy
//2)code reasibility improves
//3) dont repeat yourself principle folloe=wed or code reuability becomes easy