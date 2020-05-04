// https://atcoder.jp/contests/abc165/tasks/abc165_c
// input sample
// 3 4 3
// 1 3 3 100
// 1 2 2 10
// 2 3 2 10
// output sample
// 110

#include <bits/stdc++.h>
using namespace std;

int N,M,Q;
vector<int> a,b,c,d;    
int res;

void dfs(vector<int> A) {
    if(A.size() == N + 1) {
        int tmp = 0;
        for(int i = 0; i<Q; i++) {
            cout << A[i] << " " ;
            if(A[b[i]] - A[a[i]] == c[i]) tmp += d[i];
        }
        cout << endl;
        res = max(tmp , res);
        return ;
    }

    A.push_back(A.back());
    while(A.back() <= M) {
        dfs(A);
        A.back()++;
    }
}
int main() {
    scanf("%d %d %d", &N, &M, &Q);
    a = b = c = d = vector<int>(Q);
    for(int i = 0; i<Q; i++) scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    dfs(vector<int>(1,1));
    printf("%d", res);
    return 0;
}
