/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

LC [268]
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        
        for (int i=0 ; i<n ; i++){
            sum=sum+nums[i];
        }
        int total = ((n)*(n+1))/2;
        int ans = total-sum;
        return ans;
    }

};
