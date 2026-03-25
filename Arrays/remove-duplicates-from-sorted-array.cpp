// Problem: Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array
// Difficulty: Easy

// Approach:
// - Use two pointers
// - One pointer (i) tracks unique elements
// - Another pointer (j) scans the array
// - When a new element is found, place it at i+1

// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n==0)
        {
            return 0;
        }

        int i =0;

        for(int j=1;j<n;j++)
        {
            if(nums[j]!=nums[i])
            {
                i++; 
                nums[i]=nums[j];
            }
                        
        }
        return i+1;
        
    }
    
};
