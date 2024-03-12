class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> temp (nums.size());
        int zeros = 0;
        int index;
        int product = 1;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeros++;
                index = i;
                continue;
            }
            product*=nums[i];
        }

        if (zeros>1) 
        {
            return temp;
        }
        else if(zeros==1)
        {
            temp[index] = product;
            return temp;
        }
        else
        {
            for (int i=0; i<nums.size();i++)
            {
                temp[i] = product /nums[i];
            }
            return temp;
        }
    }
};