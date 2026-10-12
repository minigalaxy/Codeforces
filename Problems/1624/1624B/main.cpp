#include <iostream>

using namespace std;

int t;

long long a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(b + (b - a) > 0 && (b + (b - a)) % c == 0) cout << "YES";
        else if((a + c) % 2 == 0 && ((a + c) / 2) % b == 0) cout << "YES";
        else if(b - (c - b) > 0 && (b - (c - b)) % a == 0) cout << "YES";
        else cout << "NO";

        cout << '\n';
    }

    return 0;
}