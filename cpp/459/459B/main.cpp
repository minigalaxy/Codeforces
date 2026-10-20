#include <iostream>
#include <algorithm>

using namespace std;

int n;

int b[200'000];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> b[i];

    int min_f = *min_element(b, b + n), max_f = *max_element(b, b + n);

    cout << max_f - min_f << ' ' << 1LL * count(b, b + n, min_f) * count(b, b + n, max_f); 

    return 0;
}