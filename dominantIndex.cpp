class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int LargeElement = nums[0], LargeIndex = 0;

        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > LargeElement){
                LargeElement = nums[i];
                LargeIndex = i;
            }

        for(int i = 0; i < nums.size(); i++)
            if((nums[i] * 2) > LargeElement && i != LargeIndex)
                return -1;

        return LargeIndex;

    }
};