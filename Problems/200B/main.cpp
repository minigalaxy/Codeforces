#include <iostream>

using namespace std;

int n;

int p;

double sum = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p;

        sum += p;
    }

    cout << fixed;
    cout.precision(4);
    cout << sum / n;

    return 0;
}