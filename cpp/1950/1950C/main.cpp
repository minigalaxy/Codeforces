#include <iostream>
#include <iomanip>

using namespace std;

int t;

int h, m;

int main(){
    cin >> t;

    cout.fill('0');

    while(t--){
        char c;
        cin >> h >> c >> m;

        cout << setw(2) << ((h > 12 || h == 0) ? abs(h - 12) : h) << ':' << setw(2) << m << ' ' << ((h >= 12) ? "PM" : "AM") << '\n';
    }

    return 0;
}