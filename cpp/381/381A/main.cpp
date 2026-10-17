#include <iostream>

using namespace std;

int n;

int c[1'000];

int p[2] = { 0, 0 };

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> c[i];

    for(int i = 0, l = 0, r = n - 1; i < n; i++){
        if(c[l] > c[r]) p[i % 2] += c[l++];
        else p[i % 2] += c[r--];
    }

    cout << p[0] << ' ' << p[1];

    return 0;
}