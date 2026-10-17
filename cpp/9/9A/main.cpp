#include <iostream>

using namespace std;

int Y, W;

int A, B;

int main(){
    cin >> Y >> W;

    A = 7 - max(Y, W);
    B = 6;

    if(A % 3 == 0) A /= 3, B /= 3;
    if(A % 2 == 0) A /= 2, B /= 2;
    
    cout << A << '/' << B;

    return 0;
}