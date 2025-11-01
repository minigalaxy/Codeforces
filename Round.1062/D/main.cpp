#include <iostream>
#include <vector>

using namespace std;

int t;

int n;

vector<int> prime;

long long a[100'000];

bool p[100'000] = { false, };

int main()
{
    for(int i = 2; i < 100'000; i++){
        for(int j = 2; i * j <= 100'000; j++){
            p[i * j] = true;
        }
    }
    
    for(int i = 2; i < 100'000; i++){
        if(!p[i]) prime.push_back(i);
    }
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        for(int j: prime){
            bool flag = false;
                
            for(int k = 0; k < n; k++){
                if(a[k] % j != 0){
                    flag = true;
                    break;
                }
            }
            
            if(flag){
                cout << j << '\n';
                break;
            }
        }
    }
    
    return 0;
}
