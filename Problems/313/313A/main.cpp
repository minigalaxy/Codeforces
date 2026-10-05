#include <iostream>

using namespace std;

string n;

string a, b;

int main(){
    cin >> n;

    a = n;
    b = n;

    a.erase(a.size() - 1, 1);
    b.erase(b.size() - 2, 1);

    cout << max(stoi(n), max(stoi(a), stoi(b)));

    return 0;
}