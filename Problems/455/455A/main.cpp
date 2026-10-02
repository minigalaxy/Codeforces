#include <iostream>

using namespace std;

int n;

int a;

long long c[100'001] = { 0, };

long long dp[100'001][2] = { 0, };

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;

        c[a] += a;
    }

    for(int i = 1; i <= n; i++){
        dp[i][1] = dp[i - 1][0] + c[i];
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << max(dp[n][0], dp[n][1]);

    return 0;
}