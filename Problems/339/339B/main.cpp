#include <iostream>

using namespace std;

int n, m;

int a;

long long res = 0;

int main(){
    cin >> n >> m;

    for(int i = 0, c = 1; i < m; i++){
        cin >> a;

        if(a > c){
            res += a - c;
            c = a;
        } else if(a < c){
            res += a + n - c;
            c = a;
        }
    }

    cout << res;

    return 0;
}