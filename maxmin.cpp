class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min,max;
    	min=A[0];
    	max=A[0];
    	for(int i=1;i<N;i++){
    	    if(A[i]>max)
    	    max=A[i];
    	    else if(A[i]<min)
    	    min=A[i];
    	    
    	}
    return min+max;
}
};
