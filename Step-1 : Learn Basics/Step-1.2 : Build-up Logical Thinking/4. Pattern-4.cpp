/*

1
2 2 
3 3 3

*/

#include <iostream>
using namespace std;

void pattern4(int n){
  for (int i=1 ; i<=n ; i++){
    for (int j=1 ; j<=i ; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}

int main (){
  int n;
  cout << "Enter value of N : ";
  cin >> n;
  pattern4(n);
  return 0;
}
