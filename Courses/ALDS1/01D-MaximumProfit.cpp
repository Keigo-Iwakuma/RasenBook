#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int rDist = -2e10;
    int rMin = 1e10;
    int tmp;
    for (int i=0; i<n; i++) {
        scanf("%d", &tmp);
        rDist = max(rDist, tmp-rMin);
        rMin = min(rMin, tmp);
    }
    printf("%d\n", rDist);
}