#include <iostream>

using namespace std;

string a, b;

int main(){
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++)
        if(a[i] >= 'a') a[i] = a[i] - 'a' + 'A';

    for(int i = 0; i < b.size(); i++)
        if(b[i] >= 'a') b[i] = b[i] - 'a' + 'A';

    if(a < b) cout << -1;
    else if(b < a) cout << 1;
    else cout << 0;

    return 0;
}