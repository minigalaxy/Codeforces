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

        cout << ((s.find("...") != string::npos) ? 2 : count(s.begin(), s.end(), '.')) << '\n';
    }

    return 0;
}