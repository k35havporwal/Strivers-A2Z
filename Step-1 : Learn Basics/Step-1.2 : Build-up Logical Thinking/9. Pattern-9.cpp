/*

  *
 ***
*****
*****
 ***
  *

*/

void nStarDiamond(int n) {
    for (int i=0 ; i<n ; i++){
      for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
      }

      for (int j=0 ; j<(2*i)+1 ; j++){
      cout << "*";
    }
    cout << endl;
  }
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
