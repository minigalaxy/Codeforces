#include <iostream>
#include <algorithm>

using namespace std;

int t;

string a, b;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        swap(a[0], b[0]);

        cout << a << ' ' << b << '\n';
    }

    return 0;
}