#include <bits/stdc++.h>
using namespace std;

int res = 0;
void fibo (int a, int b) {
    if(a >= 100) return;
    cout << res << endl;
    res = a + b;
    fibo(b, res);
}

int main() {
    fibo(0, 1);
    return 0;
}
