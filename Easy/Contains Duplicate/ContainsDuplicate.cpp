/*
    QUESTION: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

    LEETCODE QUESTION NUMBER = 217

    Example 1:
    Input: nums = [1,2,3,1]
    Output: true

    Example 2:
    Input: nums = [1,2,3,4]
    Output: false

    Example 3:
    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true

    Explination => 
    Very easy steps:
    1. sort the array
    2. traverse the array
    3. check nums[i] == nums[i+1]
    4. return true if it matches or else false
*/

#include <algorithm>
#include <vector> 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         bool checkDuplicate = true;
        if(nums.size() == 0 || nums.size() == 1)
            checkDuplicate = false;
            
        for(int i = 0; i<nums.size()-1; i++){
          if(nums[i] == nums[i+1]){
                checkDuplicate = true;
                break;
           }
             else{
                 checkDuplicate = false;
           }         }         return checkDuplicate;
    }

};
