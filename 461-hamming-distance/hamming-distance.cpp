class Solution {
public:
    int hammingDistance(int x, int y) {
        int Xorvalue=x^y;
        int countsetbit=0;
        for(int i=0;i<32;i++){
            if(Xorvalue & 1){
                countsetbit++;
            }
            Xorvalue >>=1;
        }
        return countsetbit;
    }
};