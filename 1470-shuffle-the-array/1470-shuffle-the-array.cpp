class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for (int i = 0; i < n; ++i) {
            nums[i + n] = (nums[i + n] << 10) | nums[i];
        }
        
         int index = 0;
        for (int i = n; i < 2 * n; ++i) {
            int x = nums[i] & 1023;       
            int y = nums[i] >> 10;       
            
            nums[index++] = x;
            nums[index++] = y;
         }
        
        return nums;
    }
};