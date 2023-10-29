#include <iostream>
#include <vector>
using namespace std;
#include<algorithm>
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
vector<int> positiveElements, negativeElements;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            positiveElements.push_back(arr[i]);
        } else {
            negativeElements.push_back(arr[i]);
        }
    }

    int idx = 0;
    for (int pos : positiveElements) {
        arr[idx] = pos;
        idx++;
    }

    for (int neg : negativeElements) {
        arr[idx] = neg;
        idx++;
    }


    }
};
