#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) cin >> A[i];

    int flag = 1;
    int count = 0;
    for (int i=0; i<N; i++) {
        flag = 0;
        for (int j=N-1; j>i; j--) {
            if (A[j] < A[j-1]) {
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = 1;
                count++;
            }
        }
    }
    for (int i=0; i<N; i++) cout << A[i] << (i==N-1? '\n': ' ');
    cout << count << '\n';
}