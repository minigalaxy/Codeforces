#include <iostream>

using namespace std;

int t;

int R, X, D, n;

string d;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int res = 0;
            
        cin >> R >> X >> D >> n;
        
        cin >> d;
        
        for(char c: d){
            if(c == '1'){
                R = max(0, R - D);
                res++;
            }
            else if(R < X) res++;
        }
        
        cout << res << '\n';
    }
    
    
    return 0;
}
