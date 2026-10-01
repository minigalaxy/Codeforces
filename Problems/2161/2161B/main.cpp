#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int n;

vector<int> s, a;

bool grid[100][100];

bool is_square(){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(grid[i][j] && grid[i + 1][j] && grid[i][j + 1] && grid[i + 1][j + 1]) return true;
        }
    }
    
    return false;
}

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        s.clear();
        a.clear();
            
        cin >> n;
        cin.ignore();
        
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                grid[j][k] = false;
                
                if(getchar() == '#'){
                    grid[j][k] = true;
                    s.push_back(j - k);
                    a.push_back(j + k);
                }
            }
            getchar();
        }
        
        if(s.empty() || (s.size() == 4 && is_square())) cout << "YES" << '\n';
        else cout << (*max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end()) < 2 || *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) < 2 ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
