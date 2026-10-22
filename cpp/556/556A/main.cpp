#include <iostream>
#include <algorithm>

using namespace std;

int n;

string s;

int main(){
    cin >> n;

    cin >> s;

    cout << abs(2 * count(s.begin(), s.end(), '0') - n);

    return 0;
}