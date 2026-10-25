#include <iostream>

using namespace std;

int t;

int w, h, n;

int main(){
    cin >> t;

    while(t--){
        cin >> w >> h >> n;

        int c = 0;

        while((w > 0) && ((w & 1) == 0)) c++, w = w >> 1;
        while((h > 0) && ((h & 1) == 0)) c++, h = h >> 1;

        cout << (((1LL << c) >= n) ? "YES" : "NO") << '\n';
    }

    return 0;
}