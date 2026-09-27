#include <iostream>

using namespace std;

int n;

int p, q;

int a;

bool lvl[101] = { false, };

bool res = true;

int main(){
    cin >> n;

    cin >> p;

    for(int i = 0; i < p; i++){
        cin >> a;

        lvl[a] = true;
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> a;

        lvl[a] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!lvl[i]) res = false;
    }

    cout << ((res) ? "I become the guy." : "Oh, my keyboard!");

    return 0;
}