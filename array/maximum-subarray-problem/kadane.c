// time: O(n)
// space: O(1)

#include <stdio.h>

int kadane(int arr[], int n);
int max(int a, int b);

int main() {
    //int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr[] = { -8, -3, -6, -2, -5, -4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", kadane(arr, n));
    return 0;
}

int kadane(int arr[], int n) {
    // stores maximum sum sub-array found so far
    int max_so_far = arr[0];
    // stores maximum sum of sub-array ending at current position
    int max_ending_here =arr[0];

    int i;
    for(i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        max_ending_here = max(max_ending_here, arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}
