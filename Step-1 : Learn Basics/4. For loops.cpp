//Nth Fibonacci Number 

#include <iostream>
using namespace std;

int main (){
  int fib1=0;
  int fib2=1;
  int n,newfib=0;
  cout << "Enter Value of N : ";
  cin >> n;
  if ( n==1 || n==2 ){
    cout << fib2;
  }
  else{
  for (int i=1 ; i<n ; i++){
      newfib = fib1+fib2;
      fib1=fib2;
      fib2=newfib;
  }
  cout << newfib;
  }
}
