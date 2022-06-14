// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
       vector<int>v;
        int c,d;
        if(A>B){
            c=A;
            d=B;
        }
        else{
            c=B;
            d=A;
        }
        v.push_back(c+d);
        v.push_back(c*d);
        v.push_back(c-d);
        v.push_back(c/d);
        return v;
    }
};https://media.geeksforgeeks.org/img-practice/check-square-1596781127.svg

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}  // } Driver Code Ends
