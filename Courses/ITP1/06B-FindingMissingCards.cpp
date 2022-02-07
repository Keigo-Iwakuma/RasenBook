#include <bits/stdc++.h>

using namespace std;

void notFounds(vector<int>& a, char m){
    for (int i=0; i<13; i++) {
        if (a[i] == 0) cout << m << ' ' << i+1 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> s(13, 0), h(13, 0), c(13, 0), d(13, 0);
    char m;
    int r;
    for (int i=0; i<n; i++) {
        cin >> m >> r;
        if (m == 'S') s[r-1] = 1;
        else if (m == 'H') h[r-1] = 1;
        else if (m == 'C') c[r-1] = 1;
        else d[r-1] = 1;
    }
    notFounds(s, 'S');
    notFounds(h, 'H');
    notFounds(c, 'C');
    notFounds(d, 'D');
}