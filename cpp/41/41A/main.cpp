#include <iostream>
#include <algorithm>

using namespace std;

string s, t;

int main(){
    cin >> s >> t;

    reverse(s.begin(), s.end());

    cout << ((s == t) ? "YES" : "NO");

    return 0;
}