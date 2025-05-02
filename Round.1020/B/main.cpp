#include <iostream>

using namespace std;

int t;

int n, x;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> x;
        
        if(n > x){
            for(int j = 0; j < x; j++) cout << j << ' ';
            for(int j = x + 1; j < n; j++) cout << j << ' ';
            cout << x;
        } else {
            for(int j = 0; j < n; j++) cout << j << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}
