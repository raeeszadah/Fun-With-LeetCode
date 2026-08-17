class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     int insertPos = 0; // Tracks where the next even number should go
        
        // Single for loop to scan the entire array
        for (int i = 0; i < nums.size(); i++) {
            
            // If statement to check if the current number is even
            if (nums[i] % 2 == 0) {
                // Swap the even number to the front of the array
                std::swap(nums[i], nums[insertPos]);
                insertPos++;
            }
        }
        
        return nums;   
    }
};