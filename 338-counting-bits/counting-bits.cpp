class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> mems(n+1);
        mems[0]=0;
        for(int i=1;i<=n;i++){
            mems[i]=mems[i/2]+ (i%2);  //mems[5]=mems[5/2]+(5%2)=1+1=2
        }
        return mems;
    }
};