// Given a data type, help finding the size of it in byte.

#include <iostream>
#include <limits.h>
using namespace std;
class Solution {
  public:
    int dataTypeSize(string str) {
       
       if (str=="Character"){
           return sizeof(char);
       }
       else if (str=="Integer"){
          return sizeof(int);
       }
       else if (str=="Long"){
           return sizeof(long);
       }
       else if (str=="Float"){
           return sizeof(float);
       }
       else if (str=="Double"){
           return sizeof(double);
       }
       else {
           return 0;
       }
      
    }
};
