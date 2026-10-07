#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int t;

int n;

int a[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        cout << accumulate(a, a + n, 0) - (*min_element(a, a + n)) * n << '\n';
    }
    
    return 0;
}