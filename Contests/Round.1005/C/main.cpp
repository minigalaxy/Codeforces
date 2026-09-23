#include <iostream>

using namespace std;

int t;

int n;

int a[200000];

long long solve(int l, int r){
    if(l > r) return 0;

    long long tmp = 0;

    for(int i = l; i <= r; i++){
        if(a[i] > 0){
            tmp = max(tmp, a[i] + binary_sum(i + 1, r));

            for(int j = i;)

            break;
        }
    }

    for(int i = r; i >= l; i--){
        if(a[i] < 0){
            tmp = max(tmp, a[i] + binary_sum(i + 1, r));
            break;
        }
    }

    return tmp;
}

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        cout << binary_sum(0, n - 1) << '\n';
    }

    return 0;
}
