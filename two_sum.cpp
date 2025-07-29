#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> arrMap; 
        for (int i = 0; i < arr.size(); ++i) {
            int diff = target - arr[i];
            if (arrMap.find(diff) != arrMap.end()) {
                return {arrMap[diff], i};
            }
            arrMap[arr[i]] = i;
        }
        return {}; 
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
