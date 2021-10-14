#include <iostream>

using namespace std;

int x, y;
int arr[10][10];
int start = 1;

// void snailShell ( int start_row, int start_col,
//                 int row, int col);

int main(){
    
    cin >> x >> y;
    
    for(int i = 0; i <= x - 1; i++){
        for(int j = 0; j <= y - 1; j++){
            arr[i][j] = 0;
        }
    }
    
    int _i = 0;
    int _j = 0;
    int _x = x;
    int _y = y;
    
    while(start <= (x * y) ){
        for(int j = _j, i = _i; j <= _y - 1; j++){
        arr[i][j] = start;
        start++;
    }
    
    for(int i = _i + 1, j = _y - 1; i <= _x - 1; i++){
        arr[i][j] = start;
        start++;
    }
    
    for(int i = _x - 1, j = _y - 2; j >= _j; j--){
        arr[i][j] = start;
        start++;
    }
    
    for(int i = _x - 2, j = _j; i >= _i + 1; i--){
        arr[i][j] = start;
        start++;
    }
        _i++;
        _j++;
        _x--;
        _y--;
        
    }
    
    for(int i = 0; i <= x - 1; i++){
        for(int j = 0; j <= y - 1; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}

// void snailShell(int start_row, int start_col, int row, int col){
    
//     for(int j = start_col, i = start_row; j <= col - 1; j++){
//         arr[i][j] = start;
//         start++;
//     }
    
//     for(int i = start_row + 1, j = col - 1; i <= row - 1; i++){
//         arr[i][j] = start;
//         start++;
//     }
    
//     for(int i = row - 1, j = col - 1 - 1; j >= start_col; j--){
//         arr[i][j] = start;
//         start++;
//     }
    
//     for(int i = row - 1 - 1, j = start_col; i >= 1; i--){
//         arr[i][j] = start;
//         start++;
//     }
    
// }
