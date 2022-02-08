#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n*m), b(m);
    for (int i=0; i<n*m; i++) cin >> A[i];
    for (int i=0; i<m; i++) cin >> b[i];
    for (int i=0; i<n; i++) {
        int v = 0;
        for (int j=0; j<m; j++) {
            v += A[i*m+j] * b[j];
        }
        cout << v << endl;
    }
}