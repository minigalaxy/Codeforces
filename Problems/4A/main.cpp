#include <iostream>

using namespace std;

int w;

int main(){
    cin >> w;

    cout << ((w % 2 == 0 && w > 2) ? "YES" : "NO");

    return 0;
}