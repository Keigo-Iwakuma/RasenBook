#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<int> A(r*c);
    for (int i=0; i<r*c; i++) cin >> A[i];
    vector<int> out(c+1, 0);
    int tmp;
    for (int i=0; i<r; i++) {
        tmp = 0;
        for (int j=0; j<c; j++) {
            tmp += A[c*i + j];
            out[j] += A[c*i + j];
            cout << A[c*i + j] << ' ';
        }
        out[c] += tmp;
        cout << tmp << '\n';
    }
    for (int i=0; i<c; i++) cout << out[i] << ' ';
    cout << out[c] << '\n';
}