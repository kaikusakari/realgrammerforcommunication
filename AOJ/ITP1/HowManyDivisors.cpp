#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int res = 0;
    for (int i = a; i <= b; i++) {
        if (c % i == 0) res++;
    }
    cout << res << endl;
  return 0;
}
