class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n - 1]; // Overwrite with the last element
                n--; // Reduce logical size of the array
            } else {
                i++; // Only advance if we didn't swap
            }
        }
        return n;
    }
};
