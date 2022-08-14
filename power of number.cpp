class Solution{
    public:
    //You need to complete this fucntion
    #define mod 1000000007;
    long long power(int N,int R)
    {
       if(R==0 ){
           return 1;
           if(R==1) return N%mod;
       }
       long long prevpow = power(N,R/2);
       prevpow=(prevpow*prevpow)%mod;
       if(R%2==0)
       return prevpow;
       else
       return (N*prevpow)%mod;
        
    }
};

