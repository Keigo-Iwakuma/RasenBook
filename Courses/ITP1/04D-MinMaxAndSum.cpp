#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int aMin = 1000001;
    int aMax = -1000001;
    int tmp;
    long long int aSum = 0;
    for (int i=0; i<n; i++) {
        scanf("%d", &tmp);
        aSum += tmp;
        aMax = max(aMax, tmp);
        aMin = min(aMin, tmp);
    }
    printf("%d %d %lld\n", aMin, aMax, aSum);
}