#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int N);

int main()
{
    int N;
    cin >> N;
    
    sieveOfEratosthenes(N);
    
}

void sieveOfEratosthenes(int N){
    bool isPrime[N+1];
    
    memset(isPrime, 1, sizeof(isPrime)); 
    
    isPrime[0] = 0;
    isPrime[1] = 0;
    
    for(int i=2;i*i<=N;++i)
    {
        if(isPrime[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                isPrime[j]=0;
            }
        }
        
    }
    
    for(int k=2;k<=N;++k)
    {
        if (isPrime[k]==1)
        cout << k << " ";
    }
}