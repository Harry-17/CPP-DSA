#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for (int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; 

    Solution solution;
    int maxSubarraySum = solution.maxSubArray(nums);

    cout << "Maximum subarray sum: " << maxSubarraySum << endl;

    return 0;
}
