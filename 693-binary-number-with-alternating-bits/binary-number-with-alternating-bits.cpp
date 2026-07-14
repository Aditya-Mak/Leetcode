class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n>1){
            int lastbit=n&1;
            int secondlastbit= (n>>1)&1;
            if(lastbit == secondlastbit){
                return false;
            }
            n>>=1;
        }
        return true;
    }

};