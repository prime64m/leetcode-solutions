// Problem: Missing Number
// Link: https://leetcode.com/problems/missing-number/
// Difficulty: Easy

// Approach:
// - We know numbers are from 0 to n
// - Calculate expected sum using formula: n*(n+1)/2
// - Calculate actual sum of array elements
// - Missing number = expectedSum - actualSum

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;

        int actualSum = 0;

        for(int num : nums){
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};
