class Solution {
public://n=1,5,8
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n<=0)return false;
        if(n%2!=0) return false;
        return isPowerOfTwo(n/2);
    }
};