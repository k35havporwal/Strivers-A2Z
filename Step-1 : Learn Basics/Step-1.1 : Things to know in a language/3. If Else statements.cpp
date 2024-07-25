// /Given two integers, n and m. The task is to check the relation between n and m

#include <iostream>
using namespace std;
class Solution {
  public:
    string compareNM(int n, int m){
        if (n > m){
            return "greater";
        }
        else if (n == m){
            return "equal";
        }
        else {
            return "lesser";
        }
    }
};
