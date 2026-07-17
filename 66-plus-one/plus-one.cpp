class Solution {
public:
    vector<int> plusOne(vector<int>& di) {
        for(int i=di.size()-1;i>=0;i--){
            if(di[i]<9){
                di[i]++;
                return di;
            }
            di[i]=0;
        }
        di.insert(di.begin(),1);
        return di;
    }
};