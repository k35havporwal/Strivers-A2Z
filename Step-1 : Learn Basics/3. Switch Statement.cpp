/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).
*/

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        double area;
        if(choice == 1){
            double R = arr[0];
            area = M_PI * R * R;
        }
        
        else if(choice == 2){
            double L = arr[0];
            double B = arr[1];
            area = L * B;
        }
        
        return area;
    }
    
};
