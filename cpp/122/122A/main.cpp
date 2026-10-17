#include <iostream>

using namespace std;

int n;

int l[14] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };

bool res = false;

int main(){
    cin >> n;

    for(int i = 0; i < 14; i++){
        if(n % l[i] == 0) res = true;
    }

    cout << ((res) ? "YES" : "NO");

    return 0;
}