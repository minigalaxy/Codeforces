#include <iostream>

using namespace std;

int n;

int s;

int cnt[4] = { 0, };

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        cnt[s - 1]++;
    }

    int a = min(cnt[0], cnt[2]);

    cnt[3] += a;
    cnt[0] -= a;
    cnt[2] -= a;

    int b = cnt[1] / 2;

    cnt[3] += b;
    cnt[1] -= b * 2;
    
    cout << cnt[3] + cnt[2] + ((cnt[1] > 0) ? 1 + (cnt[0] + 3 - 2) / 4 : (cnt[0] + 3) / 4);

    return 0;
}