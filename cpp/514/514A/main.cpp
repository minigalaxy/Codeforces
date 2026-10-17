#include <iostream>

using namespace std;

string x;

string res;

int main(){
    cin >> x;

    for(char& c: x){
        if(c > '4') c = '9' - c + '0';
    }

    if(x[0] == '0') x[0] = '9';

    cout << x;

    return 0;
}