class Solution {
  public:
    long long int countDigits(long long int a, long long int b) { 
        return floor(log10(abs(a*b))+1);
        
        
    }
};
