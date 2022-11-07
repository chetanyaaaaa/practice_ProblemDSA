//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    
   private:
   int sum(int n){
        int total =0;
       while(n>0){
        
        int last_digit=   n%10;
        total+=last_digit;
        n = n/10;
       }
       return total;
   }
    
  public:
    int isDigitSumPalindrome(int N) {
      int sum_of_digits = sum(N);
       string num = to_string(sum_of_digits);
       int low = 0;
       int high = num.size()-1;
       while(low<high){
           if(num[low]!=num[high]){
               return false;
           }
           low++;
           high--;
           
       }
       return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends