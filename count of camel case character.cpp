// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	//code here.
    	int c=0;
    	for(const char &m :s)
    	    if(m>='A'&&m<='Z')
    	    ++c;
    	    return c;
    	
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
