#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

long long a[100'000];

vector<int> point;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(long long i = 0, p = 1; i < n - 1; i++){
        if((a[i + 1] - a[i]) * p < 0) point.push_back(i);
        p = a[i + 1] - a[i];
    }

    if(point.size() >= 3) cout << "no";
    else {
        if(point.size() == 2) reverse(a + point[0], a + point[1] + 1);
        else if(point.size() == 1){
            reverse(a + point[0], a + n);
            point.push_back(n - 1);
        } else {
            point.push_back(0);
            point.push_back(0);
        }

        if(is_sorted(a, a + n)){
            cout << "yes" << '\n';

            cout << point[0] + 1 << ' ' << point[1] + 1;
        }
        else cout << "no";
    }

    return 0;
}