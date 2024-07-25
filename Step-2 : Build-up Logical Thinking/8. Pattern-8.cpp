/*

*****
 ***
  *

*/

#include <iostream>
using namespace std;

void pattern(int n){
  for (int row=0 ; row<n ; row++){
    for (int col=0 ; col<row ; col++){
      cout << " ";
    }
    for (int col=0 ; col<(2*n-2*row-1) ; col++){
      cout << "*";
    }
    cout << endl;
  }
}

int main (){
  int n;
  cout << "Enter value of N : ";
  cin >> n;
  pattern(n);
  return 0;
}
