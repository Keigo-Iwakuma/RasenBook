#include <bits/stdc++.h>

using namespace std;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if ((x - r) < 0 || (x + r) > W) cout << "No" << endl;
    else if ((y - r) < 0 || (y + r) > H) cout << "No" << endl;
    else cout << "Yes" << endl;
}