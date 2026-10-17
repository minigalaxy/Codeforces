#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100];

int res = 0;

int sum;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    sum = count(a, a + n, 1);

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            res = max(res, sum + int(count(a + i, a + j + 1, 0) - count(a + i, a + j + 1, 1)));
        }
    }

    cout << res;

    return 0;
}