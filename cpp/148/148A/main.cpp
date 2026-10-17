#include <iostream>

using namespace std;

int k, l, m, n;

int d;

bool b[100001] = { false, };

int res = 0;

int main(){
    cin >> k >> l >> m >> n >> d;

    for(int i = k; i <= d; i += k) b[i] = true;
    for(int i = l; i <= d; i += l) b[i] = true;
    for(int i = m; i <= d; i += m) b[i] = true;
    for(int i = n; i <= d; i += n) b[i] = true;

    for(int i = 1; i <= d; i++){
        if(b[i]) res++;
    }

    cout << res;

    return 0;
}