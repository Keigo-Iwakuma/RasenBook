#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    while (true) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;

        int count = 0;
        for (int i=1; i<n-1; i++) {
            if (i > x) break;
            for (int j=i+1; j<n; j++) {
                if (i+j > x) break;
                for (int k=j+1; k<n+1; k++) {
                    if (i+j+k > x) break;
                    if (i+j+k == x) count++;
                }
            }
        }
        cout << count << endl;
    }
}