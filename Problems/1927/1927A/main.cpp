#include <iostream>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        cout << s.rfind('B') - s.find('B') + 1 << '\n';
    }

    return 0;
}