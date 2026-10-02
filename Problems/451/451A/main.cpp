#include <iostream>

using namespace std;

int n, m;

int main(){
    cin >> n >> m;

    cout << ((min(n, m) % 2 == 0) ? "Malvika" : "Akshat");

    return 0;
}