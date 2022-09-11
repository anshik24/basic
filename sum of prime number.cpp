class Solution{
public:
    int primeSum(int N){
    int sum=0;
    while(N!=0){
        int rem=N%10;
        if(rem==2||rem==3||rem==5||rem==7)
        sum+=rem;
        N=N/10;
    }
    return sum;
    
    }
};
