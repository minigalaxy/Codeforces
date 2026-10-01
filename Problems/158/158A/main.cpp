#include <iostream>

using namespace std;

int n, k;

int a[51];

int main(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++) cin >> a[i];

    if(a[k] > 0) while(k < n && a[k + 1] == a[k]) k++;
    else while(k > 0 && a[k] == 0) k--;

    cout << k;

    return 0;
}