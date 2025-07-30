#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
long long maxSubarraySum(int arr[], int n) {

    long long maxi = LONG_MIN; // Stores the maximum subarray sum found so far
    long long sum = 0;         // Current running sum of subarray

    int start = 0;             // Final start index of max subarray
    int end = 0;               // Final end index of max subarray
    int tempStart = 0;         // Temporary start index (used when sum is reset)

    for (int i = 0; i < n; i++) {

        sum += arr[i];  // Add current element to the running subarray sum

        // If this current sum is better than our max so far, update everything
        if (sum > maxi) {
            maxi = sum;         // Update max sum
            start = tempStart;  // Finalize start index from temp
            end = i;            // Current index becomes the new end
        }

        // If current sum becomes negative, it will only hurt future subarrays
        // So reset sum to 0 and start fresh from next index
        if (sum < 0) {
            sum = 0;            // Reset sum
            tempStart = i + 1;  // Potential new subarray may start from next index
        }
    }

    // Printing the subarray that gives the maximum sum
    cout << "The subarray with maximum sum is: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Return the maximum subarray sum found
    return maxi;
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}
