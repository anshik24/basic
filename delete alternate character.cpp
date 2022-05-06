class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string s= "";
        for(int i= 0;i<S.size();i=i+2){
            s+=S[i];
        }
        return s;
    }
