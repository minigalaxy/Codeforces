#include <iostream>

using namespace std;

string s;

int main(){
    cin >> s;

    cout << ((s.find("1111111") == string::npos && s.find("0000000") == string::npos) ? "NO" : "YES");

    return 0;
}