/*
  
1
1 2 
1 2 3  
  
*/

#include <iostream>
using namespace std;

void pattern3(int n){
  for (int i=1 ; i<=n ; i++){
    for (int j=1 ; j<=i ; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

int main (){
  int n;
  cout << "Enter value of N : ";
  cin >> n;
  pattern3(n);
  return 0;
}
