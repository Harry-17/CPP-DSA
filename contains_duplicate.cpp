#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;  
            }
            seen.insert(num);
        }

        return false;  
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 1};  

    Solution solution;
    bool hasDuplicate = solution.containsDuplicate(nums);

    if (hasDuplicate) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicates found" << endl;
    }

    return 0;
}
