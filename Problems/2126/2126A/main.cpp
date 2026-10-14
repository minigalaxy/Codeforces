#include <iostream>
#include <algorithm>

using namespace std;

int t;

string x;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x;

        cout << *min_element(x.begin(), x.end()) << '\n';
    }

    return 0;
}