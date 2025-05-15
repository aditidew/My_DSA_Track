#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> prefixSum(n);
    
    // Build the prefix sum array
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int maxLen = 0;

    // Check all subarrays using prefix sums
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = (i == 0) ? prefixSum[j] : (prefixSum[j] - prefixSum[i - 1]);
            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;
    cout << "Length of longest subarray with sum " << k << " is: "
         << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
