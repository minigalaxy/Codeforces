#include <iostream>

using namespace std;

int t;

long long n;

int main(){
     cin >> t;

     for(int i = 0; i < t; i++){
        cin >> n;

        while((n & 1) == 0) n = n >> 1;

        cout << ((n != 1) ? "YES" : "NO") << '\n';
     }

    return 0;
}