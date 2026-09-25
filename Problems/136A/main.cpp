#include <iostream>

using namespace std;

int n;

int p;

int res[100];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p;

        res[p - 1] = i;
    }

    for(int i = 0; i < n; i++) cout << res[i] + 1 << ' ';

    return 0;
}