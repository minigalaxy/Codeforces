#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

pair<int, int> a[100];

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        
        a[i].first = (a[i].first + m - 1) / m;
        a[i].second = i;
    }

    cout << (*max_element(a, a + n)).second + 1;

    return 0;
}