#include <iostream>
#include <algorithm>

using namespace std;

int s, n;

pair<int, int> xy[1'000];

bool res = true;

int main(){
    cin >> s >> n;

    for(int i = 0; i < n; i++) cin >> xy[i].first >> xy[i].second;
    
    sort(xy, xy + n);

    for(int i = 0; res && i < n; i++){
        if(s > xy[i].first) s += xy[i].second;
        else res = false;
    }

    cout << ((res) ? "YES" : "NO");

    return 0;
}