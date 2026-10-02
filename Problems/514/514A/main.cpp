#include <iostream>

using namespace std;

string x;

int main(){
    cin >> x;

    for(char c: x){
        if(c > '4') c = 9 - (c - '0') + '0';
    }

    cout << x;

    return 0;
}