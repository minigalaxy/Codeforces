#include <iostream>

using namespace std;

int t;

int n, k;

int d[200000], memory[200000];

void dp(int i, int s, int r){
    dp(i + 1, s + d[i], r + k);
    dp(i + 1, s, r - 1);
    dp(i + 1, s, r);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
