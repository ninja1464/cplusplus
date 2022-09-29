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
int arrr[100000000]; // 10^8//  in a global array max size can be 10^8
// char arr2[400000000]; // max char array size 4*10^8
int main()
{
    // int arr[1000000]; // when we try to allocate sixe greater than 10^6  then it will give segmentation fault
    // segmentaionfakut also occur when we try tonaccess memory does not brlong to us
    //  maximum size of an interger can be 10^6 inside a funtcion
    //  in a global array max size can be 10^8
    // we can only get 4 million bytes continuous memeory allocation
    // char char1[4000000];
    // long int will be off half size of 1 million will be considered aas maximum size for long int array

    long long1[1000000];

    cout << "it works" << endl; // segmentation faults
    return 0;
}