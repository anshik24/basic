class Solution {
  public:
  long long int reversr_digit(long long int n){
    long sum=0;
    while(n!=0){
      long rem= n%10;
      sum = sum *10+rem;
      n/=10;
    }
    return sum;
