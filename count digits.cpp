class Solution{
public:
    int evenlyDivides(int N){
        int num=N;
        int count=0;
        while(num>0){
            int m=num%10;
            num=num/10;
            if(m!=0 && N%m==0){
            count++;
        }
        }
        return count;
    }
};
