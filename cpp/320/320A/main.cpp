#include <iostream>
#include <algorithm>

using namespace std;

string n;

int main(){
    cin >> n;

    if(n[0] == '4' || n.find("444") != string::npos || count(n.begin(), n.end(), '1') + count(n.begin(), n.end(), '4') != n.size()) cout << "NO";
    else cout << "YES";

    return 0;
}