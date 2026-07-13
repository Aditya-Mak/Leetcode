class Solution {
public:
    int reverseBits(int n) {
        string s="";
        for(int i=31;i>=0;i--){
            if(((1<<i)&n) != 0) s+='1';
            else s+='0';
        }

        reverse(s.begin(),s.end());

        int ans = 0;

        for (char bit : s) {
            ans <<= 1;          // Multiply current answer by 2
            if (bit == '1')
                ans |= 1;       // Set the last bit
        }

        return ans;
    }
};