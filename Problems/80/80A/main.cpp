#include <iostream>

using namespace std;

int n, m;

bool p[51] = { true, true, };

bool res = true;

int main(){
    for(int i = 2; i <= 50; i++){
        for(int j = 2; i * j <= 50; j++){
            p[i * j] = true;
        }
    }

    cin >> n >> m;

    for(int i = n + 1; res && i < m; i++){
        if(!p[i]) res = false;
    }

    cout << ((res && !p[m]) ? "YES" : "NO");

    return 0;
}