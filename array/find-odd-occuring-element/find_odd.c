// time: O(n)
// space: O(1)

/* Given an array of integers, duplicates are present in it in such  a way that
all duplicates appear even number of times except one which appears odd number of times.
Find that odd appearing element in linear time  and without using any extra memory. */

#include <stdio.h>

int find_odd(int arr[], int n);
int find_odd_v2(int arr[], int n);

int main(int argc, char const *argv[]) {
    //int arr[] = {4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3};
    int arr[] = {1, 2, 2, 1, 5, 5, 5, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Odd occurring element is %d", find_odd(arr, n));
    printf("\nOdd occurring element is %d (version 2)", find_odd_v2(arr, n));

    return 0;
}

int find_odd(int arr[], int n) {
    int i, res = 0, count = 0;
    for(i = 0; i < n; i++)
        res ^= 1 << arr[i];

    while(!((res >> count) & 1))
        count++;

    return count;
}

int find_odd_v2(int arr[], int n) {
    int i, xor = 0;
    for (i = 0; i < n; i++)
        xor ^= arr[i];
    return xor;
}
