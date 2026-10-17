#include <iostream>
#include <vector>

using namespace std;

int t;

int n;

bool visited[501] = { false, };

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        int s = 0;
        
        for(int j = n; j > 0; j--){
            s += abs(j - (n - j + 1));
        }
        
        cout << s / 2 + 1 << '\n';
    }
    
    return 0;
}
