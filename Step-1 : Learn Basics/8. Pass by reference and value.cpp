//Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.


#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        vector<int>v;
        v.push_back(a+1);
        v.push_back(b+2);
        return v;
            
    }
};
