// g++ -std=c++11 -o with_hashing with_hashing.cpp
// time: O(n)
// space: O(n)

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void find_pair(int arr[], int n, int sum);

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;

    find_pair(arr, n, sum);

    return 0;
}

void find_pair(int arr[], int n, int sum) {
    unordered_map<int, int> map;

    int i;
    for(i = 0; i < n; i++) {
        if(map.find(sum - arr[i]) != map.end()) {
            cout << "Pair found at index " << map[sum - arr[i]] << " and " << i << endl;
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found" << endl;
}
