// Problem: Most Frequent Even Element
// Link: https://leetcode.com/problems/most-frequent-even-element/
// Difficulty: Easy

// Approach:
// - Iterate through each element
// - Skip odd numbers
// - For every even number, count its frequency
// - Track the maximum frequency
// - If tie occurs, choose the smaller element
// - If no even element exists, return -1

// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        int n = nums.size();
        int maxCount = 0;
        int ans = -1;

        for(int j = 0; j < n; j++) {

            if(nums[j] % 2 != 0) continue;

            int flag = nums[j];
            int count = 0;

            for(int i = 0; i < n; i++) {
                if(nums[i] == flag) {
                    count++;
                }
            }

            if(count > maxCount) {
                maxCount = count;
                ans = flag;
            }
            else if(count == maxCount) {
                ans = min(ans, flag);
            }
        }

        return ans;
    }
};
