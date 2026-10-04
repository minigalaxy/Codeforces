#include <iostream>

using namespace std;

int n, k;

int h[150'000];

int j = 0, m = 0;

int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> h[i];

    for(int i = 1, s = 0; i < n - k + 1; i++){
        s -= h[i - 1];
        s += h[i + k - 1];

        if(s < m){
            m = s;
            j = i;
        }
    }

    cout << j + 1;

    return 0;
}