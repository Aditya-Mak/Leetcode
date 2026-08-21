class Solution {
public:
    bool isPalindrome(int x) {
        long int num=0;
        int com=x;
        while(com>0){
            num*=10;
            num= num+(com%10);
            com/=10;
        }
        if(num==x){
            return true;
        }
        return false;
    }
};