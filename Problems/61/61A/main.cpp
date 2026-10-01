#include <iostream>

using namespace std;

string a, b;

string res;

int main(){
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        if((a[i] == '1') ^ (b[i] == '1')) res.push_back('1');
        else res.push_back('0');
    }

    cout << res;
}