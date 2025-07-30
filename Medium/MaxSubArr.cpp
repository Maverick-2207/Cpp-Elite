#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    
    // Input: size of array and target sum 'k'
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter target sum k: ";
    cin >> k;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Hashmap to store the first occurrence of each prefix sum
    unordered_map<int, int> preSumMap;

    int sum = 0;          // To store the cumulative (prefix) sum
    int maxLen = 0;       // To store the length of the longest subarray

    for (int i = 0; i < n; i++) {
        sum += arr[i];    // Keep adding elements to calculate prefix sum

        // Case 1: If prefix sum is equal to k, update maxLen
        if (sum == k) {
            maxLen = i + 1;  // From index 0 to i
        }

        // Case 2: Check if (sum - k) exists in the map
        // If it does, we found a subarray from map[sum - k] + 1 to i whose sum is k
        if (preSumMap.find(sum - k) != preSumMap.end()) {
            int len = i - preSumMap[sum - k];
            maxLen = max(maxLen, len); // Update the max length
        }

        // Case 3: Store the first occurrence of the prefix sum
        // We don't overwrite it because we want the longest subarray
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    cout << "\nLength of the longest subarray with sum = " << k << " is: " << maxLen << endl;

    return 0;
}
