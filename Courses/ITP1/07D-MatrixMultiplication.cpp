#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    long long A[n][m];
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> A[i][j];
    long long B[m][l];
    for (int j=0; j<m; j++) for (int k=0; k<l; k++) cin >> B[j][k];
    long long tmp;
    for (int i=0; i<n; i++) {
        for (int k=0; k<l; k++) {
            tmp = 0;
            for (int j=0; j<m; j++) tmp += A[i][j] * B[j][k];
            cout << tmp << (k==l-1? '\n': ' ');
        }
    }
}