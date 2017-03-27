// g++ -o with_sorting with_sorting.cpp
// time: O(n*logn)
// space: O(1)

#include <bits/stdc++.h>

void find_pair(int arr[], int n, int sum);

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;

    findPair(arr, n, sum);

    return 0;
}

void find_pair(int arr[], int n, int sum) {
    std::sort(arr, arr + n);

    int low = 0;
    int high = n - 1;

    // reduce search space arr[low..high] at each iteration of the loop
    // loop till low is less than high
    while (low < high) {
        if (arr[low] + arr[high] == sum) {
            std::cout << "Pair found at index " << low << " and " << high << " (" << arr[low] << " + " << arr[high] << ")" << std::endl;
            return;
        }

        // increment low index if total is less than the desired sum
        // decrement high index is total is more than the sum
        if(arr[low] + arr[high] < sum)
            low++;
        else
            high--;
    }

    std::cout << "Pair not found" << std::endl;
}
