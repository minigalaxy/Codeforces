#include <iostream>

using namespace std;

int M, N;

int main(){
    cin >> M >> N;

    cout << max((M / 2) * N + (M % 2) * (N / 2), (N / 2) * M + (N % 2) * (M / 2));

    return 0;
}