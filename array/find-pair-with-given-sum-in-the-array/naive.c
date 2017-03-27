// time:  O(n^2)
// space: O(1)

#include <stdio.h>

void find_pair(int arr[], int n, int sum);

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;

    find_pair(arr, n, sum);

    return 0;
}

void find_pair(int arr[], int n, int sum) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found at index %d and %d (%d + %d)\n", i, j, arr[i], arr[j]);
                return;
            }
        }
    }
    printf("Pair not found");
}
