class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int>ans = nums;
        ans.reserve(nums.size() * 2);
        ans.insert(ans.end(),nums.begin(),nums.end());

        return ans;
        
    }
};