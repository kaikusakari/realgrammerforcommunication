#include <bits/stdc++.h>
using namespace std;
int main () {
    int S;
    scanf("%d", &S);
    int A = 0;
    int B = 1;
    while(S >= B) {
        cout << A <<  endl;
        int C = A;
        A = B;
        B = A + C;
    }
    return 0;
}
