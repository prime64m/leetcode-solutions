// Problem: Maximum Product Subarray
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Medium

// Approach:
// - Kadane's Algorithm (Modified for Product)
// - Keep track of both maximum and minimum product
// - Because negative numbers can flip the result
// - If current element is negative → swap max and min

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxprod = nums[0];
        int minprod = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] < 0) {
                swap(maxprod, minprod);
            }

            maxprod = max(nums[i], maxprod * nums[i]);
            minprod = min(nums[i], minprod * nums[i]);

            ans = max(ans, maxprod);
        }

        return ans;
    }
};
