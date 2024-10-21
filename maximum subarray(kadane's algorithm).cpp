/*
Problem statement:
	Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example:
	Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
	Output: 6
	Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Approach:
	we will iterate the given array with a single loop.
	while iterating we will add the elements in a curr variable.
	If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider it as a part of our answer.
	Among all the sums calculated, we will consider the maximum one.
	
Complexity analysis:
	Time Complexity: O(N), where N = size of the array (using a single loop running N times.)
	Space Complexity: O(1) as we are not using any extra space.

*/

//Solution:
int maxSubArray(int* nums, int numsSize){
        int i=0;
        int curr=0;
        int max=INT_MIN;
        
        while(i<numsSize)
        {
            curr+=nums[i];
            
            if(curr > max)
                max=curr;
            
            if(curr<0) curr=0;
            
            i++;
        }
        return max;
}