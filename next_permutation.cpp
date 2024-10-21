/*
A permutation is a way of arranging numbers in a specific order. 
Problem statement:
    The "next permutation" means finding the next possible arrangement that is bigger in order. 
    If no bigger arrangement is possible, the numbers are rearranged into the smallest possible order (sorted).
    The process must happen without using extra memory.

For example, 
    the next permutation of arr = [1,2,3] is [1,3,2].
    Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
    While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
    
    Input: 
        nums = [1,2,3]
    Output: 
        [1,3,2]

Solution:
    in-place solution with constant extra memory.
1. Identify the Rightmost Increasing Pair( nums[i] < nums[i + 1]): Traverse from right to left to find the first element nums[i].
2. Find the Element to Swap: Find the smallest element larger than nums[i] to its right, and swap them.
3. Swap the Elements: Swap nums[i] with the smallest element larger than it found in step 2.
4. Reverse the Right Part: Reverse the part of the array after index i to get the smallest possible order.
5. Edge Case: If no such i exists (i.e., the array is sorted in descending order), simply reverse the entire array to obtain the smallest possible permutation.
    */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        next_permutation(nums.begin(),nums.end()); 
        this is the predefined STL function which arranges the numbers in next possible arrangement that is bigger in order
        */
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
