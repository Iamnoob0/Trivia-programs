#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int high, low;
int scrtNum;
int X; 

bool isCharACompExpr(char _ch);

char guessHostAnswer(int _X);

int selectNumber(int _high, int _low);

int main(){
    srand(time(0));
    
    cout << "Enter the high and low bound, respectively: ";
    cin >> high >> low;
    
    do{
    cout << "Enter your secret number (between low and high bound): " << endl;
    cin >> scrtNum;
    }
    while( !((scrtNum >= low) && (scrtNum <= high)) );
    
    char Answer;
    
    do{
        X = selectNumber(high, low);
        
        Answer = guessHostAnswer(X);
        
        if(Answer == '>') //X > scrtNum
            high = X-1;
        else if(Answer == '<') //X > scrtNum
            low = X+1;    
        
    }
    while(Answer != '=');
    
    cout << "Game over!!!" << endl;
    cout << "The secret number is " << X << endl;
    
    return 0;
}

bool isCharACompExpr(char _ch){
    return _ch == '>' || _ch == '<' || _ch == '=';
}

char guessHostAnswer(int _X){
    char _Answer;
    
    do{
    cout << "Is " << X << " your secret number " << endl;
    cin >> _Answer;
    }
    while(!isCharACompExpr(_Answer));
    
    return _Answer;
}

int selectNumber(int _high, int _low){
    return rand() % (_high - _low + 1) + _low;
}
