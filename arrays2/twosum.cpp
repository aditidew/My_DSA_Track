#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> twosumAllPairs(vector<int> &arr, int target) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum < target) {
            left++;
        } else if (sum > target) {
            right--;
        } else {
            result.push_back({arr[left], arr[right]});
            left++;
            right--;

            // Skip duplicates
            while (left < right && arr[left] == arr[left - 1]) left++;
            while (left < right && arr[right] == arr[right + 1]) right--;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {6, 3, 2, 6, 3, 9, -1, 4, -1};
    int target = 5;

    vector<vector<int>> pairs = twosumAllPairs(arr, target);

    if (!pairs.empty()) {
        for (auto &pair : pairs) {
            cout << "[" << pair[0] << ", " << pair[1] << "] ";
        }
        cout << endl;
    } else {
        cout << "No pairs found." << endl;
    }

    return 0;
}
