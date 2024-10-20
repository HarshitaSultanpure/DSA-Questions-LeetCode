class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(),nums.end());

        int i=nums.size()-2;

        while(i>=0 && nums[i]>=nums[i+1])
        {
            i-=1;
        }ā
            if(i>=0)
            {
                int j=nums.size()-1;
                while(j>i && nums[j]<=nums[i])
                {
                    j-=1;
                }
                swap(nums[i], nums[j]);
            }
        reverse(nums.begin() + i + 1, nums.end());
    }
};