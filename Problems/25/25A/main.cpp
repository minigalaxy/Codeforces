#include <iostream>

using namespace std;

int n;

int a[100];

int e = -1, o;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] % 2 == 0){
            if(e == -1) e = i + 1;
            else if(e > -1) e = -2;
        }
        else o = i + 1;
    }

    cout << ((e == -2) ? o : e);

    return 0;
}