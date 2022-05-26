// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    int n=0;
	    for(int i=0;i<N.size();i++){
	        n=n*10+N[i]-'0';
	    }
	    if(n%4==0)
	    return 1;
	    return 0;
	}
};

// { Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
