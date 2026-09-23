#include <iostream>
#include <stack>

using namespace std;

int t;

string p, s;

stack<int> P, S;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        while(!P.empty()) P.pop();
        while(!S.empty()) S.pop();
            
        cin >> p >> s;
        
        for(char c: p){
            int tmp = (c == 'R') ? 1 : -1;
            
            if(P.empty() || P.top() * tmp < 0) P.push(tmp);
            else P.top() += tmp;
        }
        for(char c: s){
            int tmp = (c == 'R') ? 1 : -1;
            
            if(S.empty() || S.top() * tmp < 0) S.push(tmp);
            else S.top() += tmp;
        }
        
        if(P.size() != S.size()) cout << "NO\n";
        else {
            bool flag = true;
            
            while(!P.empty() && flag){
                if(((S.top() > 0) ^ (P.top() > 0)) || (abs(S.top()) > abs(P.top()) * 2) || (abs(S.top()) < abs(P.top()))) flag = false;
                P.pop();
                S.pop();
            }
            
            cout << ((flag) ? "YES\n" : "NO\n");
        }
    }
    
    return 0;
}
