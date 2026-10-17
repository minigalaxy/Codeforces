#include <iostream>

using namespace std;

int n;

int last_digit[4] = { 8, 4, 2, 6 };

int main(){
    cin >> n;

    cout << ((n == 0) ? 1 : last_digit[(n - 1) % 4]);

    return 0;
}