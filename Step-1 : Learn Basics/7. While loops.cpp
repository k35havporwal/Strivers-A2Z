// While loop- printTable in reverse

#include <iostream>
#include <limits.h>
using namespace std;

int main(){
  int n;
  cout << "Enter Value Of N : ";
  cin >> n;
  int i=0;
  while ( i < 10){
    int num = (n*10)-(n*i);
    cout << num << endl;
    i++;
  }
}
