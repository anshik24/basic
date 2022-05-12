class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N==0||N==1)
        return 1;
       long long int fact = factorial(N-1);
        return N*fact;
    }
};
