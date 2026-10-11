#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a, b;

pair<int, int> l[100'000];

bool res = false;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        l[i] = { a, b };
    }

    sort(l, l + n);

    for(int i = 0;! res && i < n - 1; i++){
        if(l[i + 1].second < l[i].second) res = true;
    }

    cout << ((res) ? "Happy Alex" : "Poor Alex");

    return 0;
}