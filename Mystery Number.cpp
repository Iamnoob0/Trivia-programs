#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++ i) {
        int x;
        cin >> x;
        sum ^= x;
    }
    for (int i = 0; i < n + 1; ++ i) {
        int x;
        cin >> x;
        sum ^= x;
    }
    cout << sum;

    return 0;
}
