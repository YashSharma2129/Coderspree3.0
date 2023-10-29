#include <stdio.h>
#include <string.h>

int arr[102][6];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int solve(int nums[], int ind, int prev, int size) {
    if (ind == size) return 0;

    int ans = 500;
    if (arr[ind][prev] != -1) return arr[ind][prev];

    if (nums[ind] >= prev) {
        int temp = solve(nums, ind + 1, nums[ind], size);
        ans = min(temp, ans);

        for (int i = prev; i <= 3; i++) {
            temp = solve(nums, ind + 1, i, size);
            ans = min(1 + temp, ans);
        }

    } else {
        for (int i = prev; i <= 3; i++) {
            int temp = solve(nums, ind + 1, i, size);
            ans = min(1 + temp, ans);
        }
    }
    return arr[ind][prev] = ans;
}

int minimumOperations(int nums[], int size) {
    memset(arr, -1, sizeof(arr));
    return solve(nums, 0, 0, size);
}

int main() {
    int nums[] = {1,3,2,1,3,3};
    int size = 6;
    int result = minimumOperations(nums, size);
    printf("Minimum operations: %d\n", result);

    return 0;
}
