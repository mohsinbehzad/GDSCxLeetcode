class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int temp = 0;  
        for(int i = 0; i<len; i++)
        {
            temp ^= (i ^ nums[i]);
        }
        temp ^= len;
        return temp;
    }
};