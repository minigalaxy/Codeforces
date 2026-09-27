#include <iostream>

using namespace std;

int x[3];

int main(){
    cin >> x[0] >> x[1] >> x[2];

    cout << max(max(x[0], x[1]), x[2]) - min(min(x[0], x[1]), x[2]);

    return 0;
}