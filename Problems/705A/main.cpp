#include <iostream>

using namespace std;

int n;

int main(){
    cin >> n;

    cout << "I hate ";

    for(int i = 1; i < n; i++){
        if(i % 2 == 0) cout << "that I hate ";
        else cout << "that I love ";
    }

    cout << "it";

    return 0;
}