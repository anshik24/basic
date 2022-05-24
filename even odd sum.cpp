// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        int even=0,odd=0;
        for(int i=0;i<N;i++){
            if(i%2==0){
                odd+=Arr[i];
                
            }
            else
            even+=Arr[i];
        }
        vector<int>a;
        a.push_back(odd);
        a.push_back(even);
        return a;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}  // } Driver Code Ends
