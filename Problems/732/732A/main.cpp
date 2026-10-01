#include <iostream>

using namespace std;

int k, r;

int main(){
    cin >> k >> r;

    for(int i = 1; i < 11; i++){
        if(((k * i) % 10) == r || ((k * i) % 10) == 0){
            cout << i;

            break;
        }
    }

    return 0;
}