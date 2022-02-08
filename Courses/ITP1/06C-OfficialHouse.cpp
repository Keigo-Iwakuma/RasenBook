#include <bits/stdc++.h>

using namespace std;

void putLine() {
    for (int i=0; i<20; i++) cout << '#';
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(120, 0);
    int b, f, r, v;
    for (int i=0; i<n; i++) {
        cin >> b >> f >> r >> v;
        a[30*(b-1) + 10*(f-1) + (r-1)] += v;
    }
    for (int i=0; i<120; i++) {
        cout << ' ' << a[i];
        if ((i+1)%10 == 0) cout << endl;
        if ((i+1)%120 == 0) break;
        if ((i+1)%30 == 0) putLine();
    }
}