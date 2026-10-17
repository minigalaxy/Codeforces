#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[100'000];

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];

        A[i] = abs(A[i]);
    }

    cout << *min_element(A, A + N);

    return 0;
}