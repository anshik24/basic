// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int mean(int N , int A[]) {
        // code hereint 
        int sum=0;
        int i=0;
        for(i=0;i<N;i++){
        sum =sum+A[i];
            
        }
        
        int mean= sum/N;
        return mean;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.mean(N,A) << endl;
    }
    return 0;
}  // } Driver Code Ends
