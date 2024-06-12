class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; // Pointer to the leftmost boundary of 0s.
        int high = n - 1; // Pointer to the rightmost boundary of 2s.

        for (int i = 0; i <= high;) {
            if (nums[i] == 0) {
                std::swap(nums[i], nums[low]);
                i++;
                low++;
            } else if (nums[i] == 2) {
                std::swap(nums[i], nums[high]);
                high--;
            } else {
                i++;
            }
        }
    }
};
