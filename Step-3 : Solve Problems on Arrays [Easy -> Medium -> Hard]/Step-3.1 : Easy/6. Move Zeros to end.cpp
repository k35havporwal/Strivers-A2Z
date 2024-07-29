// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// LC [283]

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for (int i=0 ; i<nums.size() ; i++){
            if (nums[i]!=0){

                swap(nums[i],nums[count]);
                count++;
            }
            
        }
        for (int i=0 ; i<nums.size() ; i++){a
            cout << nums[i];
        }
        
    }
};
