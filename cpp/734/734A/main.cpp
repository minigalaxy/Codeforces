#include <iostream>

using namespace std;

int res = 0;

int n;
string s;

int main(){
    cin >> n >> s;

    for(char c: s){
        if(c == 'A') res++;
        else res--;
    }

    if(res > 0) cout << "Anton";
    else if(res < 0) cout << "Danik";
    else cout << "Friendship";

    return 0;
}