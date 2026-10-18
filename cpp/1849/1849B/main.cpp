#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

struct Monster
{
    int health, idx;
};

Monster a[300'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++){
            cin >> a[j].health;

            a[j].idx = j;
        }

        sort(a, a + n, [](Monster &a, Monster &b){
            if(a.health % k == b.health % k) return a.idx < b.idx;
            else return (a.health - 1) % k + 1 > (b.health - 1) % k + 1;
        });

        for(int j = 0; j < n; j++) cout << a[j].idx + 1 << ' ';

        cout << '\n';
    }

    return 0;
}