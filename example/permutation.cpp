#include <bits/stdc++.h>
using namespace std;

void mk_perm(int n , function<void(int *)> f) {
    int indexes[n];
    for(int i = 0; i<n; i++)indexes[i] = i;
    do {
        f(indexes);
    } while (next_permutation(indexes, indexes + n));
}
int main () {
    int tmp = 0;
    scanf("%d", &tmp);
    mk_perm(tmp, [](int *indexes) {
        cout << indexes[0] << " " << indexes[1] << " " << indexes[2] << endl;
    });
}
