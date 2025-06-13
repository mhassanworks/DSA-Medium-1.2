#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSums;
    prefixSums[0] = 1;  // To count subarrays starting from index 0
    int count = 0, currentSum = 0;

    for (int num : nums) {
        currentSum += num;

        if (prefixSums.find(currentSum - k) != prefixSums.end()) {
            count += prefixSums[currentSum - k];
        }

        prefixSums[currentSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << "Number of subarrays with sum " << k << " is: " << subarraySum(nums, k) << endl;
    return 0;
}
