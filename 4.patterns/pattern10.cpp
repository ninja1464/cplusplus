#include <iostream>
#include <vector>
using namespace std;
// https://www.codingninjas.com/codestudio/problems?practice_topic[]=Patterns&difficulty[]=EASY

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    

    return 0;
}

/*
 *
 * * *
 * * * * *
 */