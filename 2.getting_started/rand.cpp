// C++ program to generate random numbers
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
// 932298520 1100537128 450858685 1259612179
int main()
{
    // This program will create different sequence of
    // random numbers on every program run

    // Use current time as seed for random generator
    srand(time(0));

    for (int i = 0; i < 15; i++)
        cout << rand() % 101 << " ";

    return 0;
}