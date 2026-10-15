#include <iostream>
#include <set>

using namespace std;

int n, m;

int a[100'000];

int l[100'000];

int cnt[100'000];

set<int> distinct_numbers;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < m; i++) cin >> l[i];

    for(int i = n - 1; i >= 0; i--){
        distinct_numbers.insert(a[i]);
        cnt[i] = distinct_numbers.size();
    }

    for(int i = 0; i < m; i++) cout << cnt[l[i] - 1] << '\n';

    return 0;
}