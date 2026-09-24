#include <iostream>

using namespace std;

string w;

int main(){
    cin >> w;

    if(w[0] >= 'a') w[0] = w[0] - 'a' + 'A';

    cout << w;

    return 0;
}