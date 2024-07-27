//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// LC [7]

class Solution {
public:
    int reverse(int x) {
            long ans=0;
            while(x!=0){
                ans=(ans*10)+(x%10);
                x=x/10;
            }
            if (ans<INT_MIN || ans>INT_MAX){
                return 0;
            }
            else {
                return ans;
            }

        }
        
   
};
