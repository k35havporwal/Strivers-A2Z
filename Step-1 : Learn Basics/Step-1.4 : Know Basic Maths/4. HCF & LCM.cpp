//Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.


class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans;
        long long val_A=A;
        long long val_B=B;
        long long gcd=1;
        while(A>0 && B>0){
            if(A>B){
                A=A%B;
            }else{
                B=B%A;
            }
            
            if(A==0){
                gcd=B;
            }else{
                gcd=A;
            }
        }
        long long lcm=(val_A * val_B)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
        
    }
};
