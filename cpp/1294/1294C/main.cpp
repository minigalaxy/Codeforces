#include <iostream>

using namespace std;

int t;

int n;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        bool f = false;

        for(int j = 2; j * j <= n; j++){
            if(n % j == 0){
                a = j;
                n /= a;
                f = true;
                break;
            }
        }

        if(f){
            for(int j = a + 1; j * j <= n; j++){
                if(n % j == 0){
                    b = j;
                    n /= b;
                    break;
                }
            }
            
            c = n;
        }

        if(f && a < b && b < c) cout << "YES" << '\n' << a << ' ' << b << ' ' << c << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}