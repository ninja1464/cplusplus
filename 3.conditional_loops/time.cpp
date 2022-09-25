#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string hour_string;
    int hours, mins, secs;
    cin >> hours >> mins >> secs;
    string am_pm = "am";

    cout << hours << ":" << mins << ":" << secs << endl;

    // int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};

    if (hours > 12)
    {
        am_pm = "pm";
        hours = hours - 12;
    }
    if (hours < 10)
    {
        hour_string = "0";
        hour_string.push_back(char(hours + '0'));
    }
    string min_string, sec_string;
    if (mins < 10)
    {
        min_string = "0";
        min_string.push_back(char(mins + '0'));
    }

    if (secs < 10)
    {
        sec_string = "0";
        sec_string.push_back(char(secs + '0'));
    }

    cout << hour_string << ":" << min_string << ":" << sec_string << " " << am_pm << endl;

    return 0;
}