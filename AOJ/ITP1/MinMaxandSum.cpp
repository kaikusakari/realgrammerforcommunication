#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int max, min;
    long long sum;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    max = vec[0];
    min = vec[0];
    for (int i = 0; i < N; i++) {
        if (max < vec[i]) max = vec[i];
        if (min > vec[i]) min = vec[i];
        sum += vec[i];
    }
    cout << min << ' ' << max << ' ' << sum << endl;
    return 0;
}
