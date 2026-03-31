// Problem: Majority Element
// Link: https://leetcode.com/problems/majority-element/
// Difficulty: Easy

// Approach:
// - For each element, count its frequency by iterating the array
// - If any element appears more than n/2 times, return it
// - Since majority element is guaranteed to exist, we will always find it

// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int maj = n / 2;

        for(int j = 0; j < n; j++) {

            int flag = nums[j];
            int count = 0;

            for(int i = 0; i < n; i++) {
                if(nums[i] == flag) {
                    count++;
                }
            }

            if(count > maj) {
                return flag;
            }
        }

        return -1;
    }
};
