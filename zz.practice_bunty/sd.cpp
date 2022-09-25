#include <iostream>
#include <vector>
#include<iomanip>
using namespace std; 

int main() {

    int n;
    cin >> n;
    string str(n, ' ');
        
    for (int i = 1; i <= n; ++i) {
        str[n-i] = '#';
        cout << str << endl;
    }
    return 0;
}
