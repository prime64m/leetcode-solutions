// Problem: 3Sum
// Link: https://leetcode.com/problems/3sum/
// Difficulty: Medium

// Approach:
// - Sort the array
// - Fix one element and use two pointers
// - Skip duplicates to avoid repeated triplets

// Time Complexity: O(n^2)
// Space Complexity: O(1)


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;

        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i =0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int left = i+1;
            int right =n-1;

            while(left<right){
                int sum = nums[i]+nums[right]+nums[left];

                if(sum==0)
                {
                    result.push_back({nums[i],nums[left],nums[right]});

                    while(left<right && nums[left]== nums[left+1]) left++;

                    while(left<right && nums[right]==nums[right-1]) right--;


                    left++;
                    right--;
                }else if(sum<0)
                {
                    left++;
                }
                else{
                    right--;
                }
            }

        }

            return result;       
    }
};
