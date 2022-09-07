class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    return arr[n-1] * arr[n-2];
	}
};
