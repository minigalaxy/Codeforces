#include <iostream>

using namespace std;

bool b[26] = { false, };

string n;

int res = 0;

int main(){
    cin >> n;

    for(char c: n) if(!b[c - 'a']) b[c - 'a'] = true, res++;

    cout << ((res % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}