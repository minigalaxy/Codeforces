#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        cout << *max_element(s.begin(), s.end()) - 'a' + 1 << '\n';
    }

    return 0;
}