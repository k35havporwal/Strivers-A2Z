/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
LC [485]
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        for (int i=0 ; i<nums.size() ; i++){
            if (nums[i]==1){
            count++;
            }
            else {
                count=0;
            }
            if (count > maxcount){
            maxcount = count;
            }
        }
        return maxcount;
    }
};
