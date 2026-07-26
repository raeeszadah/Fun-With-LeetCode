class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0)
            return -1;

        vector<int> sum;
        sum.push_back(0);
        for(int num: nums)
            sum.push_back(sum.back() + num);
        sum.push_back(sum.back());

        for(int i = 0 ; i < nums.size() ; i ++)
            if(sum[i] == sum.back() - sum[i+1])
                return i;

        return -1;
        
    }
};