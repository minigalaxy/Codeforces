#include <iostream>

using namespace std;

int t;

int n, k;


int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        if(n > k){
            if(n % 2 == 1){
                if(k % 2 == 1){
                    cout << (n - k) / (k - 1) + 1 + ((n - k) % (k - 1) > 0) << '\n';
                } else {
                    cout << (n - (k - 2)) / (k - 1) + 1 + ((n - (k - 2)) % (k - 1) > 0) << '\n';
                }
            } else {
                if(k % 2 == 1){
                    cout << (n - (k - 1)) / (k - 1) + 1 + ((n - (k - 1)) % (k - 1) > 0) << '\n';
                } else {
                    cout << n / k + (n % k > 0) << '\n';
                }
            }
        } else cout << "1\n";
    }

    return 0;
}
