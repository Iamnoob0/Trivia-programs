#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int W, H;
    bool flag = false;
    char ch = ' ';
    string st = "";
    
    cin >> W >> H;
    
    bool A[H+2][W+2];
    char B[W+2];
    
    for (int i = 1; i <= 1; i++) {
            cin >> st;
            
            for (int j = 1; j <= W; j++) {
                
                ch = st.at(j - 1);
                B[j] = ch;
                
                if (ch == 'Y') 
                    A[i][j] = true;
                  else 
                    A[i][j] = false;    
        }
    }
    
    for (int i = 2; i <= H; i++) {
            cin >> st;
            
            for (int j = 1; j <= W; j++) {
                ch = st.at(j - 1);
                
                if (ch == 'R') {
                    A[i][j] = false;
                    B[j] = 'R';
                    
                } else if (ch == 'E') {
                    if ((B[j] == 'E' || B[j] == 'Y')
                            && (A[i - 1][j - 1] || A[i - 1][j] || A[i - 1][j + 1])) {
                        A[i][j] = true;

                    } else {
                        A[i][j] = false;
                    }
                    B[j] = 'E';
            }

        }
    }
    
    for (int j = 1; j <= W; j++) {
            if (A[H][j]) {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES";
          else 
            cout << "NO";
        
    return 0;
}
