#include <iostream>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n) {
     long long minVal = LLONG_MAX;
    long long maxVal = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        minVal = min(minVal, a[i]);
        maxVal = max(maxVal, a[i]);
    }

    return make_pair(minVal, maxVal);
}
