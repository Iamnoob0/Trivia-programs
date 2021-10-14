#include <bits/stdc++.h>

using namespace std;

int N, M;
string s, S;
int printTandem(int j, int k);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> N >> M;
    s = " ";
    cin >> S;
    s += S;
    
    for(int i = 1; i <= M; ++i){
        int j, k;
        cin >> j >> k;
        cout << printTandem(j, k) << endl;
    }
    
    return 0;
}

int printTandem(int j, int k){
    
    int count = 1;
    
    const int L = k - j + 1;
    string st;
    st = s.substr(j, L);
    
    int x = j;
    
    while(x <= N){
        if (st[0] != s[x])
        break;
        
        if (st == s.substr(x + L, L))
        {
            count++;
            x += L;
        }
        else 
            break;
    }
    return count;
}

