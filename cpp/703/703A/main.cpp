#include <iostream>

using namespace std;

int n;

int m, c;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m >> c;

        if(m > c) res++;
        else if(m < c) res--;
    }

    if(res > 0) cout << "Mishka";
    else if(res < 0) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}