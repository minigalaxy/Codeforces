#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100];

int m;

int b[100];

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    cin >> m;

    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int x = 0, y = 0;

    while(x < n && y < m){
        if(abs(a[x] - b[y]) <= 1) res++, x++, y++;
        else if(a[x] > b[y]) y++;
        else x++;
    }

    cout << res;

    return 0;
}