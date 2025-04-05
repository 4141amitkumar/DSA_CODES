#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j = nums.size() - 2;

        // Find the first decreasing element from the end
        while (j >= 0 && nums[j] >= nums[j + 1]) {
            j--;
        }

        if (j >= 0) {
            // Find the smallest element larger than nums[i] to the right of nums[i]
            int i = nums.size() - 1;
            while (i >= 0 && nums[i] <= nums[j]) {
                i--;
            }
            // Swap the found element with nums[i]
            swap(nums[j], nums[i]);
        }

        // Reverse the elements after the position i
        reverse(nums.begin() + j + 1, nums.end());
    }
};

int main() {
    // Example usage
    vector<int> nums = {4,2,0,2,3,2,0};

    Solution sol;
    sol.nextPermutation(nums);

    // Output the result
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
