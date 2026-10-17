#include <iostream>

using namespace std;

int t;

string a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;

        for(int j = a.size() - 1; j >= 0; j--){
            if(a[j] == 'p') cout << 'q';
            else if(a[j] == 'q') cout << 'p';
            else cout << 'w';
        }

        cout << '\n';
    }

    return 0;
}