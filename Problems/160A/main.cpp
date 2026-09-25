#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100];

int sum = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        sum += a[i];
    }

    sort(a, a + n, greater<int>());

    for(int i = 0, t = 0; i < n; i++){
        t += a[i];

        if(t > sum - t){
            cout << i + 1;

            break;
        }
    }

    return 0;
}