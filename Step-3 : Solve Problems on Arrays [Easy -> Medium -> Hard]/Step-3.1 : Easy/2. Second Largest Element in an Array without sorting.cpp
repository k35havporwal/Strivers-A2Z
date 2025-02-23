//Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int n=arr.size();
        int largest=0;
        int second=-1;
        for (int i=0 ; i<n ; i++){
            if (arr[i]>largest){
                largest=arr[i];
            }
        
        }
        for (int i=0 ; i<n ; i++){
            if (arr[i]>second && arr[i]<largest){
                second=arr[i];
            }
        }
        return second;
    }    

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
