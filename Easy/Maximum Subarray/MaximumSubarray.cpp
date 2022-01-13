/*
    QUESTION: Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

    A subarray is a contiguous part of an array.

    LEETCODE QUESTION NUMBER = 53

    Example 1:
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: [4,-1,2,1] has the largest sum = 6.

    Example 2:
    Input: nums = [1]
    Output: 1

    Example 3:
    Input: nums = [5,4,-1,7,8]
    Output: 23

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int originalMaxSum = nums[0], currMaxSum = nums[0];
        for(int i = 1; i<nums.size(); i++){
            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            originalMaxSum = max(originalMaxSum, currMaxSum);
        }
        return originalMaxSum;
    }
};