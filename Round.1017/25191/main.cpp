#include <iostream>

using namespace std;

int N, A, B;

int main()
{
    cin >> N >> A >> B;
    
    cout << min(N, A / 2 + B);
    
    return 0;
}
