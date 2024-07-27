//Given an integer x, return true if x is a palindrome, and false otherwise.
//LC [9]

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int temp=x;
        long rev=0;
        while (x!=0){
        rev=(rev*10)+(x%10);
        x=x/10;
        } 
         return temp==rev;   
    }
};
