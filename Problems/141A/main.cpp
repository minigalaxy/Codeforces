#include <iostream>
#include <algorithm>

using namespace std;

string a, b, c;

int main(){
    cin >> a >> b >> c;

    a += b;

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    cout << ((a == c) ? "YES" : "NO");

    return 0;
}